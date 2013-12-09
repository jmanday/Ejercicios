### Ejercicio 7

En primer lugar he tenido que instalar los siguientes paquetes:
* sudo apt-get install libcgroup1
* sudo apt-get install libcgroup-dev

Lo segundo ha sido montar el sistema de archivos:
* sudo mount -t cgroup cgroup /sys/fs/cgroup/

A continuación creamos los tres grupos de control (dentro del directorio /sys/fs/cgroup: 
* sudo mkdir primeros
* sudo mkdir segundos
* sudo mkdir terceros

Les asignamos memoria y cpu a los diferentes grupos (como superusuario):
* echo 0 > primeros/cpuset.cpus
* echo 0 > segundos/cpuset.cpus
* echo 0 > terceros/cpuset.cpus
* echo 0 > primeros/cpuset.mems
* echo 0 > segundos/cpuset.mems
* echo 0 > terceros/cpuset.mems

Asignamos las tareas a los diferentes grupos de control:
* sudo echo 11006 > cgroup/primeros/tasks (navegador)
* sudo echo 11050 > cgroup/segundos/tasks (editor de texto)
* sudo echo 11108 > cgroup/terceros/tasks (editor de imagenes)

Comparamos el uso de recursos de unos y de otros:
* cat cgroup/primeros/cpuacct.stat --> user 1472 system 153
* cat cgroup/segundos/cpuacct.stat --> user 128 system 12
* cat cgroup/terceros/cpuacct.stat --> user 102 system 12


* cat cgroup/primeros/cpuacct.usage --> 56070086145
* cat cgroup/segundos/cpuacct.usage --> 1835597120
* cat cgroup/terceros/cpuacct.usage --> 1382589216

* cat cgroup/primeros/cpuacct.usage_percpu --> 79822747651 0 0 0 
* cat cgroup/segundos/cpuacct.usage_percpu --> 2002134229 0 0 0 
* cat cgroup/terceros/cpuacct.usage_percpu --> 1424733458 0 0 0 

* cat cgroup/primeros/memory.usage_in_bytes --> 139522048
* cat cgroup/segundos/memory.usage_in_bytes --> 1220608
* cat cgroup/terceros/memory.usage_in_bytes --> 6336512

 Comprobamos como la tarea asignada al grupo "primeros" (el navegador) es la que con diferencia mas cpu y memoria consume con respecto a las otras dos.
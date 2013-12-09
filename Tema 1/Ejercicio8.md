### Ejercicio 8
* **1.**

Comentado en el foro.



* **2.**

Lo primero que se hará será crear un grupo para los usuarios donde le limitaremos de algunos recursos, para ello en el fichero **/etc/cgconfig.conf** pondremos lo siguiente:

<pre>
group usuarios {
    cpu {
       cpu.shares="250"; //le asignamos el 25% de cpu
    }

    cpuset {
       cpuset.mems="0"; 
       cpuset.cpus="0,1"; //solo los núcleos 0 y 1 están disponibles para las tareas de este grupo
    }

    memory {
       memory.limit_in_bytes="1G"; //asignamos un máximo de 1 GB de memoria para las tareas de este grupo
       memory.memsw.limit_in_bytes="2G"; //asignamos un máximo de 2 GB de memoria para el intercambio de tareas
       memory.soft_limit_in_bytes="512M"; 
   }
}
</pre>

Lo siguiente será agregar al usuario a ese grupo, para ello modificaremos el fichero **/etc/cgrules.conf** y le diremos a que grupo va a pertenecer, por ejemplo, si el usuario se llama jesús:

<pre>
  user  	controllers  	destination
#
#jesus         cpu,memory	usuarios
</pre>


* **3.**

Instalo el paquete **htop** con la siguiente orden: **sudo apt-get install htop**, a continuación lo ejecutó y compruebo como se nota la migración de la carga de un procesador a otro:

![imagen1](https://github.com/jmanday/Imagenes/blob/master/imagen1.png?raw=true)

![imagen2](https://github.com/jmanday/Imagenes/blob/master/imagen2.png?raw=true)

Vemos como cambia la carga del núcleo 2 al núcleo 1.


* **4.**

Tenemos que comprobar en el archivo **/etc/cgconfig.conf** si esta montado el grupo **blkio**, sino es así lo montamos con la siguiente orden:
<pre>
mount -t cgroup -o blkio none /sys/fs/cgroup/blkio
</pre>
Si tengo dos grupos, usuarios y oracle (en este último es donde esta ubicado mi servidor web), desde línea de comandos le asignamos más prioridad a uno frente a otro con los siguientes comandos:
<pre>
echo 1000 > /sys/fs/cgroup/blkio/oracle/blkio.weight

echo 500 > /sys/fs/cgroup/blkio/usuarios/blkio.weight
</pre>
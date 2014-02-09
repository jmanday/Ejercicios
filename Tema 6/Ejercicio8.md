### Ejercicio 8

Lo primero ha sido crearme el **playbook** para el aprovisionamiento de mi máquina:

![imagen252](https://github.com/jmanday/Imagenes/blob/master/imagen252.png?raw=true)


Lo siguiente ha sido incluir un nuevo grupo en el fichero de **ansible_hosts,** indicándole una dirección ip que referenciará a mi máquina virtual:

![imagen253](https://github.com/jmanday/Imagenes/blob/master/imagen253.png?raw=true)


Una vez realizado lo anterior paso a modificar el **Vagrantfile,** donde le indicaré el sistema de provisionamiento a usar, la ip que tendrá, así como el fichero de los grupos de ansible, ya que al parecer con las variables de entorno no se lleva bien...

![imagen254](https://github.com/jmanday/Imagenes/blob/master/imagen254.png?raw=true)


Ejecuto el script:

![imagen255](https://github.com/jmanday/Imagenes/blob/master/imagen255.png?raw=true)


Compruebo si se ha aprovionado correctamente:

![imagen256](https://github.com/jmanday/Imagenes/blob/master/imagen256.png?raw=true)

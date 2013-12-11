### Ejercicio 9

He instalado el administrador de máquinas virtuales **virt-manager** para lo cual he ejecutado la siguiente orden en el terminal.

<pre>
sudo apt-get install virt-manager
</pre>

Instalo el contenedor.

![imagen81](https://github.com/jmanday/Imagenes/blob/master/imagen81.png?raw=true)

![imagen82](https://github.com/jmanday/Imagenes/blob/master/imagen82.png?raw=true)

![imagen83](https://github.com/jmanday/Imagenes/blob/master/imagen83.png?raw=true)

Explico brevemente las características con las que me he creado mi contendor, el cual esta basado en **CentOS6.**

<pre>
-n --> Nombre del contenedor
-r --> La cantidad de memoria ram asignada
--vcpus=1 --> Le asigno una cpu virtual
--disk --> El disco que voy a crear para la instalación, size=5 --> Al cual le asigno % Gb
-c --> La imagen del sistema operativo que voy a montar
--noautoconsole --> No intectar conectarse automáticamente con la consola huesped
--accelerate --> Para que use la aceleración 
--netwotk --> El dispositivo de red a utilizar
--hvm --> Que utilice la virtualización completa
--force --> Si exsite el fichero donde se crea la instalación lo sobreescribe
</pre>
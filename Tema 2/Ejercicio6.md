### Ejercicio 6

Para este ejercicio he usado otra jaula que me creé antes
<pre>
/home/jaulas/lucid
</pre>

Me he descargado la herramienta **jailkit** y la he instalado correctamente:
<pre>
cd jailkit-2.16
./configure
make
sudo make install
</pre>

Lo siguiente es que el sistema de ficheros sea poseído por root:

![imagen18](https://github.com/jmanday/Imagenes/blob/master/imagen18.png?raw=true)

A continuación me creo el entorno indicando lo que quiero que se instale en la jaula:

![imagen19](https://github.com/jmanday/Imagenes/blob/master/imagen19.png?raw=true)

Ahora nos creamos el usuario y lo enjaulamos:

![imagen20](https://github.com/jmanday/Imagenes/blob/master/imagen20.png?raw=true)

![imagen21](https://github.com/jmanday/Imagenes/blob/master/imagen21.png?raw=true)

Le asignamos una contraseña al usuario:

![imagen22](https://github.com/jmanday/Imagenes/blob/master/imagen22.png?raw=true)

Por último he cambiado en el fichero de configuración **/home/jaulas/lucid/etc/passwd** lo que se indica en el material de la asignatura para el shell.


### Ejercicio 1

Para realizar este ejercicio he seguido una serie de pautas que describo a continuación y contrasto con imagenes.

Lo primero ha sido crearme el nuevo espacio de nombres:
<pre>
sudo unshare -m /bin/bash
</pre>
Opción **-m** porque es de montaje.

A continuación me he situado donde se encuentra la imagen que quiero montar, una vez ahí me creo el punto de montaje necesario:
<pre>
mkdir -p /mnt/disco
</pre>

Lo siguiente es montar la imagen en el punto de montaje que realice en el paso anterior:
<pre>
mount -o loop debian-7.2.0-ia64-DVD-1.iso /mnt/disco
</pre>

Vemos la secuencia de pasos realizados en la siguiente imagen:

![image3](https://github.com/jmanday/Imagenes/blob/master/imagen3.png?raw=true)


Para finalizar comprobamos que la imagen se ha montado correctamente y que sólo se puede leer desde el espacio de nombres creado anteriormente:

![imagen4](https://github.com/jmanday/Imagenes/blob/master/imagen4.png?raw=true)

Vemos como en el nuevo espacio de nombres es desde donde sólo podemos acceder a la imagen montado, si lo intentamos desde otro espacio de nombres nos sale que esta vacío.
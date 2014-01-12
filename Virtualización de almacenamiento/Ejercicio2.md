### Ejercicio 2

Comienzo instalando **sshfs** en mi máquina anfitriona:

![imagen90](https://github.com/jmanday/Imagenes/blob/master/imagen90.png?raw=true)


Ahora arranco la máquina virtual, y lo instalo en ella:

![imagen91](https://github.com/jmanday/Imagenes/blob/master/imagen91.png?raw=true)

![imagen92](https://github.com/jmanday/Imagenes/blob/master/imagen92.png?raw=true)

Añado al usuario al grupo fuse
<pre>
sudo usermod -a -G fuse ubuntu
</pre>


Vemos en la máquina virtual el fichero al que accederemos desde la máquina anfitriona:

![imagen93](https://github.com/jmanday/Imagenes/blob/master/imagen93.png?raw=true) 


En ambas máquinas se instaló **fuse** debido a las depencias existentes entre este y **sshfs**.

Vemos la dirección ip de la máquina remota:

![imagen94](https://github.com/jmanday/Imagenes/blob/master/imagen94.png?raw=true) 


Me creo dentro del directorio **/home/jesus/** de mi máquina anfitriona un directorio donde se reflejará los datos de la máquina remota:

![imagen95](https://github.com/jmanday/Imagenes/blob/master/imagen95.png?raw=true) 


Realizo la conexión:

![imagen96](https://github.com/jmanday/Imagenes/blob/master/imagen96.png?raw=true)


Y vemos el resultado:

![imagen97](https://github.com/jmanday/Imagenes/blob/master/imagen97.png?raw=true)



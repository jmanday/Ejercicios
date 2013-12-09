### Ejercicio 6

* **1.**

![imagen72](https://github.com/jmanday/Imagenes/blob/master/imagen72.png?raw=true)

![image73](https://github.com/jmanday/Imagenes/blob/master/imagen73.png?raw=true)

![imagen74](https://github.com/jmanday/Imagenes/blob/master/imagen74.png?raw=true)

* **2.**

Una vez instalado **juju-core** he seguido los diferentes pasos para instalar mysql.
Primero inicio el servicio:
<pre>
juju init
</pre>

Seguidamente cambio el entorno con el que se va a trabajar:
<pre>
juju switch local
</pre>

Instalo mongodb-server que me será necesario para el funcionamiento de juju:
<pre>
sudo apt-get install mongodb-server
</pre>

Creo el táper:
<pre>
sudo juju bootstrap
</pre>

Instalo el servicio:
<pre>
juju deploy mysql
</pre>

Y vemos el resultado:

![imagen75](https://github.com/jmanday/Imagenes/blob/master/imagen75.png?raw=true)
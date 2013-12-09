### Ejercicio 2

* **1.**

Para mostrar los puentes que hay configurados en mi sistema operativo ejecutamos la siguiente orden:
<pre>
brctl show
</pre>

![imagen5](https://github.com/jmanday/Imagenes/blob/master/imagen5.png?raw=true)

No ha sido necesario instalar el paquete ya que estaba instalado seguramente debido al uso de la herramienta docker.

* **2.**

Para crear el interfaz de red virtual seguimos los pasos que vienen descritos en el material de la asignatura. Lo creamos y comprobamos que se ha creado la nueva interfaz de red virtual ejecutando la siguientes ordenes:
<pre>
sudo brctl addbr intvirtual
ip addr show
</pre>

![imagen6](https://github.com/jmanday/Imagenes/blob/master/imagen6.png?raw=true)

Añadimos el puente **intvirtual** al interfaz wlan0 con la siguiente orden:
<pre>
sudo brctl addif intvirtual wlan0
</pre>

Previamente he solucionado el mismo problema que tenía mi compañero gracias al enlace que existe.

![imagen7](https://github.com/jmanday/Imagenes/blob/master/imagen9.png?raw=true)

Vemos como quedan los puentes que existen en mi sistema operativo:

![imagen8](https://github.com/jmanday/Imagenes/blob/master/imagen8.png?raw=true)
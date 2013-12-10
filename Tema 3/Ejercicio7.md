### Ejercicio 7

* **1.**

Para destruir la configuración anterior lo haré como viene descrito en los apuntes de la asignatura, es decir, empezando por desmontar los servicios mas recientes. Comienzo con la unidad de **mysql**.

<pre>
sudo juju destroy-unit mysql/0
</pre>

Una vez destruida dicha unidad paso a destruir la máquina.

<pre>
sudo juju destroy-machine 1
</pre>

Para comprobar que ha sido eliminamos ejecuto en el terminal **lxc-ls**

![imagen76](https://github.com/jmanday/Imagenes/blob/master/imagen76.png?raw=true)

* **2.**

Volvemos a crearnos el táper.
<pre>
sudo juju bootstrap
</pre>

Añado el servicio de mediawiki.
<pre>
sudo juju deploy mediawiki
</pre>

Añado el servicio de mysql.
<pre>
sudo juju deploy mysql
</pre>

Añado la relación entre ambos.
<pre>
sudo juju add-relation mediawiki:slave mysql:db
</pre>

Por último expongo el servicio.
<pre>
sudo juju expose mediawiki
</pre>

![imagen77](https://github.com/jmanday/Imagenes/blob/master/imagen77.png?raw=true)

![imagen78](https://github.com/jmanday/Imagenes/blob/master/imagen78.png?raw=true)


* **3.**

<pre>
#!/bin/bash

sudo juju bootstrap
sudo juju deploy mediawiki
sudo juju deploy mysql
sudo juju add-relation mediawiki:slave mysql:db
sudo juju expose mediawiki
</pre>
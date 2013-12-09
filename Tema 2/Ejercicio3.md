### Ejercicio 3

* **1.**

He escogido la distribución raring para crear el sistema mínimo.
<pre>
sudo debootstrap --arch=amd64 raring /home/jaulas/raring/ http://archive.ubuntu.com/ubuntu
</pre>


* **2.**

Primeramente me he instalado la herramienta rinse y después de ver las distribuciones de fedora que tiene disponibles (**rinse --list-distributions**) he creado el sistema con fedora-core-7.

<pre>
sudo rinse --arch i386 --distribution fedora-core-7 --directory /home/jaulas/fedora
</pre>

Vemos como la sentencia es muy similar a la de debootstrap, salvo que en este caso no hay que indicarle ningún repositorio, la propia herramienta lo sabe.
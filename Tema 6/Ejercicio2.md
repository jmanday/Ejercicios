### Ejercicio 2

Una vez instalado el gestor, creo la receta para la instalación de **nginx** y **emacs** en mi máquina, para ello me creo antes la estructura de directorios necesaria para alojar los diferentes ficheros:

<pre>
mkdir /chef/cookbook/paquetes/recipes
</pre>


Un vez creada defino mi receta con los paquetes a instalar. Se trata de un archivo en ruby que lo alojo en el último nivel de la estructura de directorio y que es de la siguiente manera:

![imagen227](https://github.com/jmanday/Imagenes/blob/master/imagen227.png?raw=true)


El siguiente paso será hacer referencia a esa receta creada, para lo cual me creo otro archivo, esta vez dentro de la carpeta **chef:** 

![imagen228](https://github.com/jmanday/Imagenes/blob/master/imagen228.png?raw=true)


El último fichero a crear es el de configuración de chef, en el cual le indicaremos la ruta de los creados anteriormente:

![imagen229](https://github.com/jmanday/Imagenes/blob/master/imagen229.png?raw=true)


Ahora solo queda lanzarlo con la siguiente orden:

<pre>
sudo chef-solo -c chef/solo.rb
</pre>

![imagen230](https://github.com/jmanday/Imagenes/blob/master/imagen230.png?raw=true)


Compruebo que se han instalado correctamente:

![imagen231](https://github.com/jmanday/Imagenes/blob/master/imagen231.png?raw=true)



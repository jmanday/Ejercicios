### Ejercicio 4

* **1.**

Para instalar **lxc-panel** sigo las instrucciones que se indica en la [página](http://lxc-webpanel.github.io/install.html) donde nos muestra las diferentes formas que hay de hacerlo. Viendo que cumplo con los requisitos he optado por realizar la instalación de forma automática.

![imagen52](https://github.com/jmanday/Imagenes/blob/master/imagen52.png?raw=true)

![imagen53](https://github.com/jmanday/Imagenes/blob/master/imagen53.png?raw=true)

![imagen55](https://github.com/jmanday/Imagenes/blob/master/imagen55.png?raw=true)

Vemos como inicialmente ambos contenedores están parados. Probamos a arrancar el contenedor con ubuntu.

![imagen59](https://github.com/jmanday/Imagenes/blob/master/imagen59.png?raw=true)

Se puede ver como ha aumentado el uso tando de **cpu** como de **memoria.**

Arrancamos también el contenedor con centOS.

![imagen60](https://github.com/jmanday/Imagenes/blob/master/imagen60.png?raw=true)

Vuelve a aumentar el uso de **cpu** y de **memoria.** Ahora paramos los dos contenedores.

![imagen58](https://github.com/jmanday/Imagenes/blob/master/imagen58.png?raw=true)

El estado de uso de la cpu y de la memoria disminuyen.

* **2.**

Estos son los valores por defecto de cada uno de los contenedores.

![imagen61](https://github.com/jmanday/Imagenes/blob/master/imagen61.png?raw=true)

Le asigno la mitad de memoria y cpu shares a cada contenedor, además de dividir los núcleos, es decir, el contenedor con centOS usará los núcleos 0 y 1 mientras que el contenedor con ubuntu los núcleros 2 y 3.

![imagen62](https://github.com/jmanday/Imagenes/blob/master/imagen62.png?raw=true)

![imagen63](https://github.com/jmanday/Imagenes/blob/master/imagen63.png?raw=true)
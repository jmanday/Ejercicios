### Ejercicio 5

He instalado nginx en el contenedor desde el gestor de paquetes, en la jaula ya no le tenía instalado de un ejercicio anterior. 

Probamos el funcionamiento del servidor web primero en la jaula.

![imagen64](https://github.com/jmanday/Imagenes/blob/master/imagen64.png?raw=true)

![imagen65](https://github.com/jmanday/Imagenes/blob/master/imagen65.png?raw=true)


A continuación lo hacemos sobre el contenedor.

![imagen66](https://github.com/jmanday/Imagenes/blob/master/imagen66.png?raw=true)

Comprobamos que ambos funciona correctamente. Como la jaula tiene las mismas interfaces de red que la máquina anfitriona, por eso lo ejecutamos con **127.0.0.1**, pero el contenedor tiene su propia interfaz de red virtual, por eso ejecutamos su ip **10.0.3.28.**

Para comparar las prestaciones del servidor web en la jaula y el contenedor he instalado el **apache_benchmark** en ambos y me he creado un pequeño script que tiene el siguiente aspecto.

![imagen67](https://github.com/jmanday/Imagenes/blob/master/imagen67.png?raw=true)

Los parámetros que le he dado al benchmark son **-c 30** para indicar el número de solicitudes múltiples a atender y **-n 30000** que son el número de solicitudes a realizar. Ejecuto el script en ambos.

![imagen68](https://github.com/jmanday/Imagenes/blob/master/imagen68.png?raw=true)

![imagen69](https://github.com/jmanday/Imagenes/blob/master/imagen69.png?raw=true)

Estos son los resultados obtenidos.

![imagen70](https://github.com/jmanday/Imagenes/blob/master/imagen70.png?raw=true)

En la siguiente tabla muestro la media de los valores mostrados anteriormente.

![imagen71](https://github.com/jmanday/Imagenes/blob/master/imagen71.png?raw=true)

Se puede comprobar como el **tiempo por petición** es mayor en la jaula que en el contenedor, lo que supone que este último realiza las peticiones en un espacio de tiempo menor al de la jaula. También se puede ver como el contenedor realiza mayor **peticiones por segundo** que la jaula y como esta tiene una mayor **velocidad de transferencia.**
### Ejercicio 6

Partiendo de una instalació previa de juju, lo iniciamos (modificando el archivo de configuración existente):

![imagen205](https://github.com/jmanday/Imagenes/blob/master/imagen205.png?raw=true)


Modifico en dicho archivo el entorno por defecto:

<pre>
default: local
</pre>


Creo el entorno:
<pre>
juju bootsrap
</pre>


Una vez creado el entorno paso a crearme los certificados necesarios para configurar azure:

![imagen206](https://github.com/jmanday/Imagenes/blob/master/imagen206.png?raw=true)



Uno de ellos (**azure.cer**) lo subo a la web de azure:

![imagen207](https://github.com/jmanday/Imagenes/blob/master/imagen207.png?raw=true)


Con el otro (**azure.pem**) lo utilizamos para configurar el entorno de azure en el fichero de configuración de **juju** junto con otros parámetros necesarios como son:

el identificador:
![imagen208](https://github.com/jmanday/Imagenes/blob/master/imagen208.png?raw=true)


y el nombre de la cuenta de almacenamiento:
![imagen209](https://github.com/jmanday/Imagenes/blob/master/imagen209.png?raw=true)


En definitiva el estado del fichero debe ser el siguiente:

![imagen210](https://github.com/jmanday/Imagenes/blob/master/imagen210.png?raw=true)


Una vez realizado todos los pasos anteriores creo un táper donde instalar los servicios e instalo GUI:
<pre>
sudo juju switch azure
sudo juju bootstrap
sudo juju deploy --to 0 juju-gui
sudo juju expose juju-gui
</pre>


Añado el servicio de **nginx** al táper:
<pre>
sudo juju deploy --to 0 cs:~imbrandon/precise/nginx
</pre>


y lo expongo:
<pre>
sudo juju expose nginx
</pre>


Para comprobar que todo ha ido bien ejecutaremos:
<pre>
juju status
</pre>

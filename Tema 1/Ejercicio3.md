### Ejercicio 3
   * **Apartado b**

  Para poder realizar este ejercicio es necesario disponer de CDE en nuestra máquina, para ello lo primero que haremos será hacernos con el y empaquetar un simple programa, en unos sencillos pasos:
     * 1. Entrar en repositorio de git en el que se encuentra disponible todo su código fuente https://github.com/pgbovine/CDE/.
     * 2. Descargar como zip, que es una operación que podemos usar desde github.
     * 3. Una vez descargada la carpeta CDE en nuestro escritorio pasaremos a descomprimirla.
     * 4. Una vez que la tengamos descomprimida, desde un terminal accedemos a la ruta de la misma y compilamos el proyecto mediante la orden **make**.
     * 5. Con el ejecutable ya obtenido, pasamos a empaquetar el programa, para ello dicho programa debe estar en el mismo directorio donde se encuentra el ejecutable de la aplicación, y ejecutamos el siguiente comando desde la línea de ordenes **./cde ./Ejercicio2.py**
     * 6. Con el paso anterior ya tenemos el archivo Ejercicio2.py.cde, ahora comprimimos la carpeta cde-package-cde en formato tar.gz, para esto usamos la siguiente orden **tar czvf Ejercicio2.tar.gz cde-package/**


  Ya tenemos nuestro programa empaquetado y listo para poder ejecutarlo en cualquier otra distribución de linux, para ello solo bastaría con descomprimir el fichero mediante la siguiente orden **tar xzvf Ejercicio2.tar.gz**, y pasar a ejecutarlo mediante la siguiente orden **cde-package/cd-root/home/jesus/Escritorio/CDE/Ejercicio2.py.cde**

  Lo he probado en otra distribución distinta(debian) a la que uso y he podido comprobar su correcto funcionamiento. También ha sido probado en fedora 19 con idéntico resultado.
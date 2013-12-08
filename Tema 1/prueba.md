### Ejercicio 1

* **Producto**:
   * QNAP TS-879U-RP-EU DUAL CORE I3-2120 3.3GHZ 2GB DD
   * Precio: 2.223,48 €


* **Aspectos importantes**:
   * Solución de almacenamiento NAS, iSCSI, IP-SAN
   * VMware, Citrix y Hyper-V ready
   * Alto rendimiento, seguro, fiable y sencillo
   * 10 GbE listos que alcanzan más de 1.000 MB/s y 100.000 IOPS
   * Procesador de varios núcleos, DDR3, SATA 6Gb/s y USB 3.0


* **Amortización a cuatro años**
   * Durante el primer año tenemos un coeficiente de amortización del **26%**,  amortizando un total de **578,1048 €**	 
   * Durante el segundo año tenemos un coeficiente de amortización del **24%**, por lo que amortizamos la cantidad de **533,6352 €**
   * Durante los últimos dos años tenemos un coeficiente de amortización del **25%** cada año, lo que nos da una cantidad de **555,87 €** por cada año.

    Si sumamos todas las cantidades vemos como nos da el resultado la base imponible del producto.

* **Amortización a siete años**:
   * Durante el primer año tenemos un coeficiente de amortización del **26%**,  amortizando un total de **578,1048 €**
   * Durante los dos siguientes años tenemos un coeficiente de amortización del **12%** cada año, amortizando la cantidad de **266,8176 €** para cada año
   * Durante el cuarto año tenemos un coeficiente de amortización del **10%**, amortizando la cantidad de **222,358 €**
   * Durante el quinto año tenemos un coeficiente de amoritización del **17%**, amortizando un total de **377,9916 €**
   * Durante los dos últimos años tenemos un coeficiente  de amortización del **11,5%** cada año, amortizando la cantidad **255,7002 €** para cada año.

    Si sumamos todas las cantidades vemos como nos da el resultado la base imponible del producto.



### Ejercicio 2

Se han escogido las siguientes propuestas para la comparativa de alojamientos web (alojamiento+dominio) :
* [OVH - Personal](http://www.ovh.es/hosting/index.xml)
* [Strato - Hosting Basico](http://www.strato.es/hosting/paquetes/)

Vemos como ambos ofrecen características similares, el primero nos ofrece 100 GB de disco duro así como tráfico ilimitado por **28.92 €** (2.41 €/mes) al año mientras que el segundo nos ofrece una capacidad de disco duro de 50 GB y la misma posibilidad de tráfico ilimitado por el precio de **13,78 €** (4.90 € (alta) + 0.74 €/mes) al año.

En cuanto a proveedores de servicios en la nube pública me he decantado por las siguientes soluciones:
* [Internap](http://www.internap.com/agile/flexible-cloud-hosting-solutions/enterprise-public-cloud-solutions/)
* [Softlayer](http://www.softlayer.com/cloudlayer/computing#)

Las características de la oferta escogida en ambos son muy parecidas, con 4 GB de RAM en ambos y con 2 y 4 cores respectivamente. Calculemos ahora según el uso de ambos:
* Para un uso de un 1% :
    * Para el primer proveedor: 0,14 $/hr, al mes son 100,8 $ * 0,01 = 1,008 $ lo que al año sería **12,096 $**
    * Para el segundo proveedor: 0,20 $/hr, al mes son 119 $ * 0,01 = 1,19 $ lo que al año sería **14,28 $**
* Para un uso de un 10% :
    * Para el primer proveedor: 0,14 $/hr, al mes son 100,8 * 0,1 = 10,08 $ lo que al año sería **120,96 $**
    * Para el segundo proveedor: 0,20 $/hr, al mes son 119 $ * 0,1 = 11,9 $ lo que al año sería **142,8 $**


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
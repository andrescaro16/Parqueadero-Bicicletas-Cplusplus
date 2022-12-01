# Parqueadero de bicicletas en C++
Este repositorio es un sistema de parqueadero de bicicletas implementado en el lenguaje de programación C++ haciendo uso de listas enlazadas. Para el caso, es un parqueadero de bicicletas, sin embargo, puede ser facilmente adaptable para otro tipo de vehículos.

&nbsp;

## Elementos tenidos en cuenta
### Dueño:
- Nombre
- Email
- Dirección
- Edad
- Telefono

### Bicicleta:
- Dueño
- Color
- Marca
- Serial

&nbsp;

## Funcionalidades
### Ingreso de bicicleta
El registro de un ingreso de bicicleta se puede realizar de manera **manual**, que es como funcionaría el sistema en un entorno real, con el ingreso de datos verídicos del propietario y su bicicleta. Además de esto, se puede realizar el registro de manera **aleatoria**, en donde podremos simular el registro de muchas bicicletas de manera random (esto con los datos almacenados en el archivo [generador.cpp](https://github.com/andrescaro16/Parqueadero-Bicicletas-Cplusplus/blob/main/generador.cpp "generador.cpp"). Esta funcionalidad de ingresar aleatoriamente bicicletas es especialmente útil para probar las demás funcionalidades del programa).

**Registro manual:** aquí, en forma de ejemplo, realizo el ingreso de una bicicleta de manera manual, por lo que debo ingresar todos los datos por mi propia cuenta:
[![Ingreso de bicicleta manual](https://i.ibb.co/hZkbL8d/Img1.png "Ingreso de bicicleta manual")](https://i.ibb.co/hZkbL8d/Img1.png "Ingreso de bicicleta manual")

**Registro aleatorio:** aquí por el contrario, realizamos "la simulación" del registro de 3 bicicletas:
[![Ingreso de bicicletas aleatorio](https://i.ibb.co/hB8Gn1h/Img2.png "Ingreso de bicicletas aleatorio")](https://i.ibb.co/hB8Gn1h/Img2.png "Ingreso de bicicletas aleatorio")

&nbsp;

### Salida de bicicleta
El registro de salida de una bicicleta se hace tomando como parámetro el nombre del propietario que desea sacar su bicicleta, de la siguiente manera:
[![Salida de bicicleta](https://i.ibb.co/KmDfWns/Img3.png "Salida de bicicleta")](https://i.ibb.co/KmDfWns/Img3.png "Salida de bicicleta")

&nbsp;

### Ver registro de bicicletas
Con esta opción podremos mirar todos los datos de las bicicletas que se encuentran actualmente en el parqueadero.
Continuando con el ejemplo, si seleccionamos la opción número 3 veríamos lo siguiente:
[![Visualización de datos](https://i.ibb.co/6BHqfrS/Img4.png "Visualización de datos")](https://i.ibb.co/6BHqfrS/Img4.png "Visualización de datos")

Como podremos ver, la **visualización de los datos** por la terminal se hace amena; en donde hacemos la agrupación de los datos por la bicicleta, el propietario y la fecha de ingreso al parqueadero.
El método que nos permite realizar el output de esta forma es el llamado "espaciar" en el [main.cpp](https://github.com/andrescaro16/Parqueadero-Bicicletas-Cplusplus/blob/main/main.cpp "main.cpp"). El funcionamiento de éste consiste en aplicarle espacios en blanco a un string; recibiendo por parámetros cuál es el tamaño del texto de la columna anterior (tamanio) y el valor total que representa la cantidad de carácteres que deberíamos tener en dicha cadena (valor) y efectuando la resta entre estos dos retorna un número de 'espacios en blanco' para rellenar en una determinada línea el espacio entre las distintas columnas.

&nbsp;

### Número de bicicletas en el parqueadero
[![Numero de bicicletas](https://i.ibb.co/tMnKxpD/Img5.png "Numero de bicicletas")](https://i.ibb.co/tMnKxpD/Img5.png "Numero de bicicletas")

&nbsp;

### Buscar bicicleta
Esta funcionalidad nos permite saber cuál es la posición del parqueadero en la que se encuentra la bicicleta. Para esto, lo que se requiere es saber el nombre del propietario.
[![Buscar bicicleta](https://i.ibb.co/YhZB1xZ/Img6.png "Buscar bicicleta")](https://i.ibb.co/YhZB1xZ/Img6.png "Buscar bicicleta")
En el ejemplo, nos dice que se encuentra en la posición número 2, lo cual podremos confirmar mirando el registro de bicicletas anteriormente presentado.

&nbsp;

### Orden de bicicletas por color
Esta funcionalidad se encuentra implícita en el ingreso de todas las bicicletas. Lo que se hace es realizar el ingreso de cada bicicleta de manera que se vayan agrupando por su respectivo color. Para hacer evidente esta funcionalidad, al ejemplo que se ha venido presentando se le agregaron 100 bicicletas y en la siguiente imagen alcanzamos a ver como se están agrupando las amarillas y por otro lado las azules:
[![Bicicletas por color](https://i.ibb.co/t4FbGsq/Img7.png "Bicicletas por color")](https://i.ibb.co/t4FbGsq/Img7.png "Bicicletas por color")

&nbsp;

### Vaciar el parqueadero
Con esta funcionalidad logramos vaciar el parqueadero "del tirón", sin necesidad de eliminarlas a todas una por una (especialmente tedioso con grandes cantidades).
[![Vaciar parqueadero](https://i.ibb.co/LZj5M2r/Img8.png "Vaciar parqueadero")](https://i.ibb.co/LZj5M2r/Img8.png "Vaciar parqueadero")

Y de la siguiente forma corroboramos que el vacío del parqueadero se realizó correctamente:
[![Confirmación vacío](https://i.ibb.co/RycrWr7/Img9.png "Confirmación vacío")](https://i.ibb.co/RycrWr7/Img9.png "Confirmación vacío")
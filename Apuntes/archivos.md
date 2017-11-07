Creas las librerias que tu quiereas con el nombre que quieras, pero luego, tienes que crear una generica en e incluir en ella las que has creado.
El .h le dice al main las funciones que hay disponibles.
  .H
  ifndef __XX_H__ del nombre del archivo
  Extern "C"         ->
  ifndef __clpusplus__-> Solo para c++
    llamadas a las funciones.

En el cpp se escriben las funciones y se pone el .h

1.-Crear objeto g++ -c nombre.cpp (Se generan los .o)
2.-Creamos una paquete con las librerias
   cat * .h > mates.h
   ¡Cambiamos el ifndef y dejamos solo las llamadas de las funciones!
3.-ar cr nombreCrear.a objetos.o
4.-En Lib dejamos el .a
5.-En include los .h
6.-Compilas gcc -Iinclude -c uso.cpp
            gcc uso.o -o uso -Llib -lnombre.h sin .h
            --------------------O---------------------
            gcc uso.cpp -Iinclude -o uso -Llib -lmates

!!Cuando pases la libreria a otro proyecto!!
1.-compilas los .cpp
2.-gcc -shared -fPIC -o libmates.so aritmetica.o logica.o
3.-Movuemos el libmates.so a la carpeta lib
4.-gcc -c -Iinclude uso.cpp
5.-gcc -o uso uso.o -Llib -lmates

al ejecutar si se a cambiado la ruta no funciona. hay que cambiarla
LD_LIBRARY_PATH='pwd'/lib
export LD_LIBRARY_PATH

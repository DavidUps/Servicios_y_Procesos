#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

void *func(void *dato){
    //Copia de la variable y al final poner el void.
    int *edad = (*int)dato;
    printf("%i", *edad);
}


int main()
{
    //Lo tienes que llamar como puntero por que se recoge como puntero y se tiene que hacer maloc(reservar memoria)
    int *edad = (int*)malloc(sizeof(int));
    *edad = 5;

    //Variable Hilo
    pthread_t id;

    //Llamar al hilo, y le pasamos la edad por que esta declaradada si no se deja en NULL.
    pthread_create(&id, NULL, func, edad);

    //Ejecutar el hilo
    pthread_join(id, NULL);

    return EXIT_SUCCESS;
}

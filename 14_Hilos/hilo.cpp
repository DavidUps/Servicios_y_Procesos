#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int suma_hilo_one = 0;
int suma_hilo_two = 0;

void* suma_hilo_uno(void* num)
{
    for(int i=0; i<5; i++)
    {
        suma_hilo_one++;
    }
}

void* suma_hilo_dos(void* num)
{
    for(int i=0;i<10;i++)
    {
        suma_hilo_two++;
    }
}

int main(int argc, char *argv[])
{
    pthread_t hilo_uno;
    pthread_t hilo_dos;

    pthread_create(&hilo_uno, NULL, suma_hilo_uno, NULL);
    pthread_create(&hilo_dos, NULL, suma_hilo_dos, NULL);

    pthread_join(hilo_uno, NULL);
    pthread_join(hilo_dos, NULL);

    printf("numero %i", suma_hilo_one);
    printf("numero %i", suma_hilo_two);


    return EXIT_SUCCESS;
}


#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

int num_uno = 0;

void* suma(void* num)
{
    for(int i=0; i<5; i++)
    {
        num_uno++;
        printf("%i : %i\n", i, num_uno);
    }
}

int main(int argc, char *argv[])
{
    pthread_t hilo;

    pthread_create(&hilo, NULL, suma, NULL);

    pthread_join(hilo, NULL);
}

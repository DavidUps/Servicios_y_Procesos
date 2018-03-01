#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MAX 1000

struct Tpila{
    int *numImpar;
    int *numPar;
    int cont;
}   numeros;


void push_par(struct Tpila *numeros, int num){
    numeros->numPar[numeros->cont++] = num;
}

void push_impar(struct Tpila *numeros,int num){
    numeros->numImpar[numeros->cont++] = num;
}


void *numeros_comprobacion(void *){
    for(int i=0; i<MAX; i++){
        if(i%2==0){
            push_par(&numeros,i);
        }else{
            push_impar(&numeros,i);
        }
    }
    return NULL;
}

int main(int argc, char *argv[]){

    numeros.numImpar = (int *)malloc(MAX * sizeof(int));
    numeros.numPar   = (int *)malloc(MAX * sizeof(int));

    pthread_t hiloPares, hiloImpares;

    pthread_create(&hiloPares, NULL, numeros_comprobacion, NULL);
    pthread_create(&hiloImpares, NULL, numeros_comprobacion, NULL);

    pthread_join(hiloPares, NULL);
    pthread_join(hiloImpares, NULL);

    for(int i=0; i<numeros.cont; i++)
        printf("Hola Soy Tu Par - %i \n", numeros.numPar[i]);
    for(int i=0; i<numeros.cont; i++)
        printf("\t Hola Soy Tu Impar - %i \n", numeros.numImpar[i]);
    return EXIT_SUCCESS;
}

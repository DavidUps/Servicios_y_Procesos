#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MAX 1000

struct Tpila{
    int *numImpar;
    int *numPar;
    int cont;
}   primos;


void push_par(struct Tpila *numeros, int num){
    numeros->numImpar[numeros->cont++] = num;
}

void push_impar(struct Tpila *numeros,int num){
    numeros->numImpar[numeros->cont++] = num;
}


void *numeros_comprobacion(void *){
    for(int i=0; i<MAX; i++){
        if(i%2==0){
            push_par(i);
        }else{
            push_impar(i);
        }
    }
    return NULL;
}

int main(int argc, char *argv[]){

    primos.numImpar = (int *)malloc(MAX * sizeof(int));
    primos.numPar   = (int *)malloc(MAX * sizeof(int));

    pthread_t hiloPares, hiloImpares;

    pthread_create(&hiloPares, NULL, numeros_comprobacion, NULL);
    pthread_create(&hiloImpares, NULL, numeros_comprobacion, NULL);

    pthread_join(hiloPares, NULL);
    pthread_join(hiloImpares, NULL);

    return EXIT_SUCCESS;
}

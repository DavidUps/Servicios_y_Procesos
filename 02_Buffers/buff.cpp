#include <stdio.h>
#include <stdlib.h>

#define N 6

struct TQueue{
    char buffer[N];
    int summit;
};

struct TQueue buffer;

bool push (struct TQueue *b, int c){
    if(b->summit >= N){
        return false;
    }

    b->buffer[b->summit++] = c;
}

bool pop (struct TQueue *b, int c){
    if(b->summit >= 0){
        return false;
    }

    b->buffer[b->summit--] = c;
}

void print (struct TQueue *b){
    for(int i=0; i<N; i++){
        print("%i", b->buffer[i]);
    }
}

int main(){

    int c= 1;

    push   (struct TQueue *buffer, c);
    pop    (struct TQueue *buffer, c);
    print  (struct TQueue *buffer);

}

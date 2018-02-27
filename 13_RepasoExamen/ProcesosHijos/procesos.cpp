#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

int total_hijos=0;

void ejecutarPrograma(int programa)
{

    switch(programa)
    {
        case 1:
            execl("/usr/bin/firefox", "firefox", "www.google.com", NULL);
            break;
        case 2:
            execl("usr/bin/firefox", "firefox", "www.youtube.com",NULL);
    }
}

void spawn(int programa)
{
    int pid_hijo = fork();
    if(pid_hijo)
    {
        total_hijos++;
        return;
    }
    ejecutarPrograma(programa);
}

void muerteHijo(int signal)
{
    int muerte;
    wait(&muerte);
    total_hijos--;
}

int main()
{
    struct sigaction sa;
    bzero(&sa, sizeof(&sa));
    sa.sa_handler=&muerteHijo;
    sigaction(SIGCHLD,&sa,NULL);

    for(int i=0;i<2;i++)
        spawn(i);

    while(total_hijos)
    {
        fprintf(stderr, "tengo %i hijos", total_hijos);
        sleep(2);
    }
    printf("Ya he acabado");
    return EXIT_SUCCESS;
}

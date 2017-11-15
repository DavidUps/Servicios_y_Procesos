#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

#define N 0x100
#define PROMPT "MA-TEOS$> "
#define M 0x10

void spawn(char buffer[N])
{
    char *argv[M];
    int i=0;
    pid_t mijo = 0;

    while( argv[i++] = strtok(buffer, " ") )
        buffer = NULL;

    //Eliminar el \n
    strtok(argv[i-2], "\n");

    //Guarda el pid del hijo
    mijo = fork();
    if(mijo)
        return;

    //execv("/user/bin/firefox", ["firefox", "index.html", NULL]);
    //execl("/user/bin/firefox", "firefox", "index.html", NULL);
    execvp(argv[0], argv);
    fprintf(stderr,"No he podido ejecutar: %s\n", argv[0]);
    exit(1);

}

int main(int argc, char *argv[])
{
    char buffer[N];

    while (1)
    {
        printf (PROMPT);
        //donde lo quieres guardar, cuanto quieres guardar, por donde lo quieres guardar
        fgets  (buffer, N, stdin);
        spawn  (buffer);
    }
       return EXIT_SUCCESS;
}

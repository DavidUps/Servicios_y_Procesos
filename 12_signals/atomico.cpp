#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>

sig_atomic_t veces = 0;

void handler (int signal_number)
{
    ++veces;
}

int main(int argc, char *argv[])
{
    struct sigaction sa;
    memset (&sa, 0, sizeof (sa));
    sa.sa_handler = &handler;
    sigaction (SIGUSR1, &sa, NULL);

    printf("SIGURS1 was reased %d times\n", veces);
    return EXIT_SUCCESS;
}

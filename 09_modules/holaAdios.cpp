#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dlfcn.h>

void salir(const char *mssg)
{
    fprintf(stderr, "%s\n", mssg);
    exit(1);
}

void run(const char *mod_name, const char *funct_name)
{
    void *modulo = NULL;
    void (*fn)() = NULL; //declarar la función sin pasar nada. Pasando un puntero a una función.

    modulo = dlopen(mod_name, RTLD_LAZY); //Se nos habre el modulo cuando le hagamos una llamada.

    if (!modulo)
        salir("No se ha encontrado el módulo");
        fn = (void (*)()) dlsym(modulo, funct_name); //Creas un molde de void (*fn)() = NULL || Función que le quieras pasar.

    if(!fn)
        salir("No se ha encontrado la muncion");

    (*fn)();
    dlclose(modulo); //Se cierra el modulo.
}


int
main(int argc, char *argv[])
{
    run("./libhola.so" , "greet"  );
    run("./libadios.so", "farwell");

    return EXIT_SUCCESS;
}


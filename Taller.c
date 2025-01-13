#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int PalabraMasLarga = 0, PalabraMasCorta = 10, longitudPalabraActual = 0;
    int PalabraContador = 0;
    char nombre[500];
    printf("ingrese el texto: ");
    fflush(stdin);
    fgets(nombre, 500, stdin);
    int len = strlen(nombre) - 1;
    for (int i = 0; i <= len; i++)
    {
        if (nombre[i] != ' ' && nombre[i] != '\0'&& nombre[i] != '\n')
        {
            longitudPalabraActual = longitudPalabraActual + 1;
        }
        else
        {
            PalabraContador = PalabraContador + 1;
            if (longitudPalabraActual > PalabraMasLarga)
            {
                PalabraMasLarga = longitudPalabraActual;
            }
            else if (longitudPalabraActual < PalabraMasCorta)
            {
                PalabraMasCorta = longitudPalabraActual;
            }
            longitudPalabraActual = 0;
        }
    }

    if (len == 0)
    {
        printf("No se ingreso ningun texto. Saliendo del programa.\n");
        return 0;
    }
    printf("Numero de palabras: %d\n", PalabraContador);
    printf("La palabra mas larga: %d\n", PalabraMasLarga);
    printf("La palabra mas corta: %d\n", PalabraMasCorta);
    return 0;
}   
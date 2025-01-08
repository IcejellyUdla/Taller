
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char nombre[50];
    printf("ingrese el texto: ");
    fflush(stdin);
    fgets(nombre, 50, stdin);

    int len = strlen(nombre) - 1;
    int longitudPalabraMasLarga = 0, longitudPalabraMasCorta = 50, longitudPalabraActual = 0;
    int PalabraContador=0;
   
    for (int i = 0; i < len; i++) {
        if (nombre[i] != ' ' && nombre[i] != '\n' && nombre[i] != '\t') {
            longitudPalabraActual++;  
        } else {
            if (longitudPalabraActual > 0) {
                PalabraContador=PalabraContador+1;
                if (longitudPalabraActual > longitudPalabraMasLarga) {
                    longitudPalabraMasLarga = longitudPalabraActual;  
                }
                if (longitudPalabraActual < longitudPalabraMasCorta) {
                    longitudPalabraMasCorta = longitudPalabraActual; 
                }
                longitudPalabraActual = 0;  
            }
        }
    }

    if (longitudPalabraActual > 0) {
        if (longitudPalabraActual > longitudPalabraMasLarga) {
            longitudPalabraMasLarga = longitudPalabraActual;
        }
        if (longitudPalabraActual < longitudPalabraMasCorta) {
            longitudPalabraMasCorta = longitudPalabraActual;
        }
    }

    printf("Numero de palabras: %d\n", PalabraContador);
    printf("La palabra mas larga: %d\n", longitudPalabraMasLarga);
    printf("La palabra mas corta: %d\n", longitudPalabraMasCorta);
    return 0;
}
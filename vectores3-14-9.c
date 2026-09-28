#include <stdio.h>

int main() {
    int vector[5];
    int i;
    int posicion;
    char continuar = 's';

    for (i = 0; i < 5; i++) {
        printf("Ingrese el dato %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    while (continuar == 's' || continuar == 'S') {

        printf("\nIngrese la posicion que quiere consultar (1-5): ");
        scanf("%d", &posicion);

        if (posicion >= 1 && posicion <= 5) {
            printf("El dato en la posicion %d es: %d\n",
                   posicion, vector[posicion - 1]);
        } else {
            printf("Posicion invalida.\n");
        }

        printf("¿Quiere continuar? (s/n): ");
        scanf(" %c", &continuar);
    }

    printf("\nPrograma terminado.\n");

    return 0;
}

#include <stdio.h>

int main() {
    int vector1[5];
    int vector2[5];
    int i;

    printf("Datos del primer vector:\n");

    for (i = 0; i < 5; i++) {
        printf("Ingrese el dato %d: ", i + 1);
        scanf("%d", &vector1[i]);
    }

    printf("\nDatos del segundo vector:\n");

    for (i = 0; i < 5; i++) {
        printf("Ingrese el dato %d: ", i + 1);
        scanf("%d", &vector2[i]);
    }

    printf("\nComparacion:\n");

    for (i = 0; i < 5; i++) {

        if (vector1[i] > vector2[i]) {
            printf("Posicion %d: %d es mayor y pertenece al vector 1.\n",
                   i + 1, vector1[i]);

        } else if (vector2[i] > vector1[i]) {
            printf("Posicion %d: %d es mayor y pertenece al vector 2.\n",
                   i + 1, vector2[i]);

        } else {
            printf("Posicion %d: ambos valores son iguales (%d).\n",
                   i + 1, vector1[i]);
        }
    }

    return 0;
}

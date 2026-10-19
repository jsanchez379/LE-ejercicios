#include <stdio.h>

int main() {
    int vector[5];
    int i, posicion, opcion;

    for (i = 0; i < 5; i++) {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    do {
        printf("Elija una opcion:\n ");
        printf("1. Acceder a un valor\n");
        printf("2. Modificar un valor\n");
        printf("3. Imprimir todo el vector\n");
        printf("4. Terminar el programa\n");
        scanf("%d", &opcion);

        switch (opcion) {

            case 1:
                printf("Ingrese la posicion que desea saber (1-5): ");
                scanf("%d", &posicion);

                if (posicion >= 1 && posicion <= 5) {
                    printf("El valor es: %d\n", vector[posicion - 1]);
                } else {
                    printf("Posicion invalida.\n");
                }
                break;

            case 2:
                printf("Ingrese la posicion que desea modificar (1-5): ");
                scanf("%d", &posicion);

                if (posicion >= 1 && posicion <= 5) {
                    printf("Ingrese el nuevo valor: ");
                    scanf("%d", &vector[posicion - 1]);
                    printf("Valor modificado correctamente.\n");
                } else {
                    printf("Posicion invalida.\n");
                }
                break;

            case 3:
                printf("Valores del vector:\n");

                for (i = 0; i < 5; i++) {
                    printf("Posicion %d: %d\n", i + 1, vector[i]);
                }
                break;

            case 4:
                printf("Programa terminado.\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }

    } while (opcion != 4);

    return 0;
}

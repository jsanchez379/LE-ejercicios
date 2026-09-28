#include <stdio.h>

void sumaPromedio(int vector[], int tam) {
    int suma = 0;
    float promedio;
    int i;

    for (i = 0; i < tam; i++) {
        suma = suma + vector[i];
    }

    promedio = (float)suma / tam;

    printf("\nSuma de los valores: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);
}

int main() {
    int vector[10];
    int i, j, aux;

    for (i = 0; i < 10; i++) {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    for (i = 0; i < 10 - 1; i++) {
        for (j = i + 1; j < 10; j++) {

            if (vector[i] < vector[j]) {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }

    printf("\nVector ordenado es:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", vector[i]);
    }

    sumaPromedio(vector, 10);

    return 0;
}

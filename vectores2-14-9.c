#include <stdio.h>

int main() {
    int vector[5];
    int i;
    int suma = 0;
    float promedio;

    for (i = 0; i < 5; i++) {
        printf("Ingrese el dato %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    for (i = 0; i < 5; i++) {
        suma = suma + vector[i];
    }

    promedio = (float)suma / 5;

    printf("\nLa suma de los datos es: %d\n", suma);
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}

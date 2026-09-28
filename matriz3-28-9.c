#include <stdio.h>
int main() {
    int matriz[2][4][3] = {
        {
            {0, 0, 0},
            {0, 1, 0},
            {1, 0, 0},
            {1, 1, 1}
        },
        {
            {0, 0, 0},
            {0, 1, 1},
            {1, 0, 1},
            {1, 1, 1}
        }
    };
    int j;
    printf("Tabla de verdad AND\n");
    printf(" A  B  Salida\n");
    for (j = 0; j < 4; j++) {
        printf(" %d  %d     %d\n",
               matriz[0][j][0],
               matriz[0][j][1],
               matriz[0][j][2]);
    }
    printf("\nTabla de verdad OR\n");
    printf(" A  B  Salida\n");
    for (j = 0; j < 4; j++) {
        printf(" %d  %d     %d\n",
               matriz[1][j][0],
               matriz[1][j][1],
               matriz[1][j][2]);
    }
    return 0;
}

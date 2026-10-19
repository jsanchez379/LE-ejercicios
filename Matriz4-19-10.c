int main() {
    int AND[4][3];
    int OR[4][3];
    int XOR[4][3];
    int NAND[4][3];
    int i, j;

    printf("Complete la tabla AND (A, B, Resultado):\n");

    for (i = 0; i < 4; i++) {
        printf("Fila %d\n", i + 1);

        for (j = 0; j < 3; j++) {
            scanf("%d", &AND[i][j]);
        }
    }

    printf("\nComplete la tabla OR (A, B, Resultado):\n");

    for (i = 0; i < 4; i++) {
        printf("Fila %d\n", i + 1);

        for (j = 0; j < 3; j++) {
            scanf("%d", &OR[i][j]);
        }
    }

    printf("\nComplete la tabla XOR (A, B, Resultado):\n");

    for (i = 0; i < 4; i++) {
        printf("Fila %d\n", i + 1);

        for (j = 0; j < 3; j++) {
            scanf("%d", &XOR[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        NAND[i][0] = AND[i][0];
        NAND[i][1] = AND[i][1];
        NAND[i][2] = !AND[i][2];
    }

    printf("\nTABLA AND\n");
    printf("A  B  Resultado\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", AND[i][j]);
        }
        printf("\n");
    }

    printf("\nTABLA OR\n");
    printf("A  B  Resultado\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", OR[i][j]);
        }
        printf("\n");
    }

    printf("\nTABLA XOR\n");
    printf("A  B  Resultado\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", XOR[i][j]);
        }
        printf("\n");
    }

    printf("\nTABLA NAND\n");
    printf("A  B  Resultado\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", NAND[i][j]);
        }
        printf("\n");
    }

    return 0;
}

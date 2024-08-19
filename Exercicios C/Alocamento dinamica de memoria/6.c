// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void) {
//     int **mat, i, j;

//     mat = (int **)malloc(4 * sizeof(int *));
//     for (i = 0; i < 4; i++) {
//         mat[i] = (int *)malloc(3 * sizeof(int));
//     }

//     srand(time(NULL));
//     for (i = 0; i < 4; i++) {
//         for (j = 0; j < 3; j++) {
//             mat[i][j] = rand() % 100;
//         }
//     }

//     for (i = 0; i < 4; i++) {
//         for (j = 0; j < 3; j++) {
//             printf("%d ", mat[i][j]);
//         }
//         printf("\n");
//     }

//     // Liberação de memória alocada para cada linha da matriz
//     for (i = 0; i < 4; i++) {
//         free(mat[i]);
//     }

//     // Liberação de memória alocada para a matriz principal
//     free(mat);

//     return 0;
// }


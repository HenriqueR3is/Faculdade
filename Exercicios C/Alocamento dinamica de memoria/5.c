// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void imprimir(int *vet, int tam) {
//     printf("Elementos do vetor:\n");
//     for(int i = 0; i < tam; i++) {
//         printf("%d ", vet[i]);
//     }
//     printf("\n");
// }

// int main(void) {
//     int i, tam, *vet;
//     printf("Digite o tamanho do vetor: ");
//     scanf("%d", &tam);
//     srand(time(NULL));
//     vet = (int*)malloc(tam * sizeof(int));
//     if(vet != NULL) {
//         printf("Mem�ria alocada com sucesso.\n");
//         for(i = 0; i < tam; i++)
//             vet[i] = rand() % 100;
//         imprimir(vet, tam);
//         free(vet);
//     } else {
//         printf("Erro ao alocar mem�ria.\n");
//     }
//     return 0;
// }


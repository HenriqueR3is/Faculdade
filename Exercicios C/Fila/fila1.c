    // #include <stdio.h>
    // #include <stdlib.h>

    // typedef struct no {
    //     int valor;
    //     struct no *proximo;
    // } No;

    // void inserir(No **fila, int num) {
    //     No *aux, *novo = malloc(sizeof(No));
    //     if (novo != NULL) {
    //         novo->valor = num;
    //         novo->proximo = NULL;
    //         if (*fila == NULL)
    //             *fila = novo;
    //         else {
    //             aux = *fila;
    //             while (aux->proximo != NULL)
    //                 aux = aux->proximo;
    //             aux->proximo = novo;
    //         }
    //     } else {
    //         printf("\nErro ao alocar memória.\n");
    //     }
    // }

    // No* remover(No **fila) {
    //     No *remove = NULL;
    //     if (*fila != NULL) {
    //         remove = *fila;
    //         *fila = (*fila)->proximo;
    //     } else {
    //         printf("\nFila vazia.\n");
    //     }
    //     return remove;
    // }

    // void imprimir(No *fila) {
    //     while (fila) {
    //         printf("%d ", fila->valor);
    //         fila = fila->proximo;
    //     }
    //     printf("\n");
    // }

    // int main(void) {
    //     No *r, *fila = NULL;
    //     int opcao, valor;
    //     do {
    //         printf("\n0 - Sair\n1 - Inserir\n2 - Remover\n3 - Imprimir\n");
    //         scanf("%d", &opcao);

    //         switch (opcao) {
    //             case 1:
    //                 printf("Digite um valor: ");
    //                 scanf("%d", &valor);
    //                 inserir(&fila, valor);
    //                 break;
    //             case 2:
    //                 r = remover(&fila);
    //                 if (r != NULL) {
    //                     printf("Removido: %d\n", r->valor);
    //                     free(r);
    //                 }
    //                 break;
    //             case 3:
    //                 imprimir(fila);
    //                 break;
    //             default:
    //                 if (opcao != 0)
    //                     printf("\nOpção inválida.\n");
    //         }
    //     } while (opcao != 0);

    //     return 0;
    // }


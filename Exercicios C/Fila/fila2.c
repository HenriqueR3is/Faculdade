// #include <stdio.h>
// #include <stdlib.h>

// typedef struct no {
//   int valor;
//   struct no *proximo;
// } No;

// typedef struct {
//   No *prim;
//   No *fim;
//   int tam;
// } Fila;

// void criar_fila(Fila *fila) {
//   fila->prim = NULL;
//   fila->fim = NULL;
//   fila->tam = 0;
// }

// void inserir(Fila *fila, int num) {
//   No *novo = malloc(sizeof(No));
//   if (novo != NULL) {
//     novo->valor = num;
//     novo->proximo = NULL;
//     if (fila->prim == NULL) {
//       fila->prim = novo;
//       fila->fim = novo;
//     } else {
//       fila->fim->proximo = novo;
//       fila->fim = novo;
//     }
//     fila->tam++;
//   } else {
//     printf("\nErro ao alocar memória.\n");
//   }
// }

// No *remover(Fila *fila) {
//   No *remove = NULL;
//   if (fila->prim != NULL) {
//     remove = fila->prim;
//     fila->prim = remove->proximo;
//     fila->tam--;
//   } else {
//     printf("\nFila vazia.\n");
//   }
//   return remove;
// }

// void imprimir(Fila *fila) {
//   No *aux = fila->prim;
//   while (aux) {
//     printf("%d ", aux->valor);
//     aux = aux->proximo;
//   }
//   printf("\n");
// }

// int main(void) {
//   No *r;
//   Fila fila;
//   int opcao, valor;
//   criar_fila(&fila);
//   do {
//     printf("\n0 - Sair\n1 - Inserir\n2 - Remover\n3 - Imprimir\n");
//     scanf("%d", &opcao);

//     switch (opcao) {
//     case 1:
//       printf("Digite um valor: ");
//       scanf("%d", &valor);
//       inserir(&fila, valor);
//       break;
//     case 2:
//       r = remover(&fila);
//       if (r != NULL) {
//         printf("Removido: %d\n", r->valor);
//         free(r);
//       }
//       break;
//     case 3:
//       imprimir(&fila);
//       break;
//     default:
//       if (opcao != 0)
//         printf("\nOpção inválida.\n");
//     }
//   } while (opcao != 0);

//   return 0;
// }


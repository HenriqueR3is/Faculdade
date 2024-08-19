// #include <stdio.h>
// #include <stdlib.h>

// typedef struct no {
//   int valor;
//   struct no *proximo;
// } No;

// void inserir_inicio(No **lista, int num) {
//   No *novo = malloc(sizeof(No));
//   if (novo != NULL) {
//     novo->valor = num;
//     novo->proximo = *lista;
//     *lista = novo;
//   } else {
//     printf("Erro ao alocar memória.\n");
//   }
// }

// void inserir_fim(No **lista, int num) {
//   No *aux, *novo = malloc(sizeof(No));
//   if (novo != NULL) {
//     novo->valor = num;
//     novo->proximo = NULL;
//     if (*lista == NULL) {
//       *lista = novo;
//     } else {
//       aux = *lista;
//       while (aux->proximo != NULL)
//         aux = aux->proximo;
//       aux->proximo = novo;
//     }
//   } else {
//     printf("Erro ao alocar memória.\n");
//   }
// }

// void inserir_meio(No **lista, int num, int ant) {
//   No *aux, *novo = malloc(sizeof(No));
//   if (novo != NULL) {
//     novo->valor = num;
//     if (*lista == NULL) {
//       novo->proximo = NULL;
//       *lista = novo;
//     } else {
//       aux = *lista;
//       while (aux->valor != ant && aux->proximo != NULL)
//         aux = aux->proximo;
//       novo->proximo = aux->proximo;
//       aux->proximo = novo;
//     }
//   } else {
//     printf("Erro ao alocar memória.\n");
//   }
// }

// void inserir_ordenado(No **lista, int num) {
//   No *aux, *novo = malloc(sizeof(No));
//   if (novo != NULL) {
//     novo->valor = num;
//     if (*lista == NULL || num < (*lista)->valor) {
//       novo->proximo = *lista;
//       *lista = novo;
//     } else {
//       aux = *lista;
//       while (aux->proximo != NULL && novo->valor > aux->proximo->valor)
//         aux = aux->proximo;
//       novo->proximo = aux->proximo;
//       aux->proximo = novo;
//     }
//   } else {
//     printf("Erro ao alocar memória.\n");
//   }
// }

// void imprimir(No *no) {
//   printf("\nLista: ");
//   while (no != NULL) {
//     printf("%d ", no->valor);
//     no = no->proximo;
//   }
//   printf("\n\n");
// }

// int main(void) {
//   int opcao, valor, anterior;
//   No *lista = NULL;
//   do {
//     printf("\n0 - Sair\n1 - Inserir no início\n2 - Inserir no fim\n3 - Inserir "
//            "no meio\n4 - Inserir ordenado\n5 - Imprimir\n");
//     printf("Digite uma opção: ");
//     scanf("%d", &opcao);
//     switch (opcao) {
//     case 1:
//       printf("Valor: ");
//       scanf("%d", &valor);
//       inserir_inicio(&lista, valor);
//       break;
//     case 2:
//       printf("Valor: ");
//       scanf("%d", &valor);
//       inserir_fim(&lista, valor);
//       break;
//     case 3:
//       printf("Valor a ser inserido e valor de referência: ");
//       scanf("%d %d", &valor, &anterior);
//       inserir_meio(&lista, valor, anterior);
//       break;
//     case 4:
//       printf("Valor: ");
//       scanf("%d", &valor);
//       inserir_ordenado(&lista, valor);
//       break;
//     case 5:
//       imprimir(lista);
//       break;
//     default:
//       if (opcao != 0)
//         printf("Opção inválida.\n");
//     }
//   } while (opcao != 0);

//   return 0;
// }


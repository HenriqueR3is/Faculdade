// #include <stdio.h>
// #include <stdlib.h>

// typedef struct no {
//   int valor;
//   struct no *proximo;
// } No;

// typedef struct {
//   No *inicio;
//   No *fim;
//   int tam;
// } Lista;

// void criar_lista(Lista *lista) {
//   lista->inicio = NULL;
//   lista->fim = NULL;
//   lista->tam = 0;
// }

// void inserir_inicio(Lista *lista, int num) {
//   No *novo = malloc(sizeof(No));
//   if (novo) {
//     novo->valor = num;
//     novo->proximo = lista->inicio;
//     lista->inicio = novo;
//     if (lista->fim == NULL)
//       lista->fim = novo;
//     lista->fim->proximo = lista->inicio;
//     lista->tam++;
//   } else
//     printf("Erro ao alocar memória.\n");
// }

// void inserir_fim(Lista *lista, int num) {
//   No *aux, *novo = malloc(sizeof(No));
//   if (novo) {
//     novo->valor = num;
//     if (lista->inicio == NULL) {
//       lista->inicio = novo;
//       lista->fim = novo;
//       lista->fim->proximo = lista->inicio;
//     } else {
//       lista->fim->proximo = novo;
//       lista->fim = novo;
//       novo->proximo = lista->inicio;
//       lista->tam++;
//     }
//   } else
//     printf("Erro ao alocar memória.\n");
// }

// void inserir_ordenado(Lista *lista, int num) {
//   No *aux, *novo = malloc(sizeof(No));
//   if (novo) {
//     novo->valor = num;
//     if (lista->inicio == NULL) {
//       inserir_inicio(lista, num);
//     } else if (novo->valor < lista->inicio->valor) {
//       inserir_inicio(lista, num);
//     } else {
//       aux = lista->inicio;
//       while (aux->proximo != lista->inicio && novo->valor > aux->proximo->valor)
//         aux = aux->proximo;
//       if (aux->proximo == lista->inicio)
//         inserir_fim(lista, num);
//       else {
//         novo->proximo = aux->proximo;
//         aux->proximo = novo;
//         lista->tam++;
//       }
//     }
//   } else
//     printf("Erro ao alocar memória.\n");
// }

// No *remover(Lista *lista, int num) {
//   No *aux, *no = NULL;
//   if (lista->inicio) {
//     if (lista->inicio == lista->fim && lista->inicio->valor == num) {
//       no = lista->inicio;
//       lista->inicio = NULL;
//       lista->fim = NULL;
//       lista->tam--;
//     } else if (lista->inicio->valor == num) {
//       no = lista->inicio;
//       lista->inicio = no->proximo;
//       lista->fim->proximo = lista->inicio;
//       lista->tam--;
//     } else {
//       aux = lista->inicio;
//       while (aux->proximo != lista->inicio && aux->proximo->valor != num)
//         aux = aux->proximo;
//       if (aux->proximo->valor == num) {
//         if (lista->fim == aux->proximo) {
//           no = aux->proximo;
//           aux->proximo = no->proximo;
//           lista->fim = aux;
//         } else {
//           no = aux->proximo;
//           aux->proximo = no->proximo;
//           lista->tam--;
//         }
//       }
//     }
//   }
//   return no;
// }

// No *buscar(Lista *lista, int num) {
//   No *aux = lista->inicio;
//   if (aux) {
//     do {
//       if (aux->valor == num)
//         return aux;
//       aux = aux->proximo;
//     } while (aux != lista->inicio);
//   }
//   return NULL;
// }

// void imprimir(Lista lista) {
//   No *no = lista.inicio;
//   printf("\nLista tam %d: ", lista.tam);
//   if (no) {
//     do {
//       printf("%d ", no->valor);
//       no = no->proximo;
//     } while (no != lista.inicio);
//     printf("\nInício: %d\n", no->valor);
//   }
//   printf("\n\n");
// }

// int main(void) {
//   int opcao, valor;
//   Lista lista;
//   No *no;
//   criar_lista(&lista);
//   do {
//     printf("\n0 - Sair\n1 - Inserir\n2 - Remover\n3 - Imprimir\n4 - Buscar\n");
//     printf("Digite uma opção: ");
//     scanf("%d", &opcao);
//     switch (opcao) {
//     case 1:
//       printf("Valor: ");
//       scanf("%d", &valor);
//       inserir_ordenado(&lista, valor);
//       break;
//     case 2:
//       printf("Valor: ");
//       scanf("%d", &valor);
//       no = remover(&lista, valor);
//       if (no) {
//         printf("Elemento: %d", no->valor);
//         free(no);
//       } else
//         printf("Elemento não encontrado.\n");
//       break;
//     case 3:
//       imprimir(lista);
//       break;
//     case 4:
//       printf("Valor: ");
//       scanf("%d", &valor);
//       no = buscar(&lista, valor);
//       if (no)
//         printf("Elemento: %d\n", no->valor);
//       else
//         printf("Elemento não encontrado.\n");
//       break;
//     default:
//       if (opcao != 0)
//         printf("Opção inválida.\n");
//     }
//   } while (opcao != 0);
//   return 0;
// }


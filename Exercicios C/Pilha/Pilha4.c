// #include <stdio.h>
// #include <stdlib.h>

// typedef struct no {
//   int valor;
//   struct no *proximo;
// } No;

// No *empilhar(No *pilha, int num) {
//   No *novo = malloc(sizeof(No));
//   if (novo) {
//     novo->valor = num;
//     novo->proximo = pilha;
//     return novo;
//   } else {
//     printf("\nErro ao alocar memória. \n");
//     return NULL;
//   }
// }

// No *desempilhar(No **pilha) {
//   No *remover = NULL;
//   if (*pilha) {
//     remover = *pilha;
//     *pilha = remover->proximo;
//     return remover;
//   } else {
//     printf("\nPilha vazia.\n");
//     return NULL;
//   }
// }

// void imprimir(No *pilha) {
//   while (pilha) {
//     printf("%d\n", pilha->valor);
//     pilha = pilha->proximo;
//   }
// }

// int fatorial(int num) {
//   No *remover, *pilha = NULL;
//   while (num > 1) {
//     pilha = empilhar(pilha, num);
//     num--;
//   }
//   imprimir(pilha);
//   while (pilha) {
//     remover = desempilhar(&pilha);
//     num = num * remover->valor;
//     free(remover);
//   }
//   return num;
// }

// int main(void) {
//   int n;
//   printf("\nDigite um valor maior que zero: ");
//   scanf("%d", &n);
//   printf("Fatorial de %d: %d\n", n, fatorial(n));

//   return 0;
// }


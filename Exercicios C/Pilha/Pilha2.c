// #include <stdio.h>
// #include <stdlib.h>

// typedef struct {
//   int dia, mes, ano;
// } Data;

// typedef struct {
//   char nome[30];
//   Data data;
// } Pessoa;

// typedef struct No {
//   Pessoa p;
//   struct No *proximo;
// } No;

// typedef struct {
//   No *topo;
//   int tam;
// } Pilha;

// Pessoa ler_pessoa() {
//   Pessoa p;
//   printf("\nNome: ");
//   scanf("%29[^\n]", p.nome);
//   printf("\nData de nascimento: ");
//   scanf("%d %d %d", &p.data.dia, &p.data.mes, &p.data.ano);
//   return p;
// }

// void imprimir(Pessoa p) {
//   printf("\nNome: %s\nData: %2d/%2d/%4d", p.nome, p.data.dia, p.data.mes,
//          p.data.ano);
// }

// void criar(Pilha *p) {
//   p->topo = NULL;
//   p->tam = 0;
// }

// void empilhar(Pilha *p) {
//   No *novo = malloc(sizeof(No));
//   if (novo) {
//     novo->p = ler_pessoa();
//     novo->proximo = p->topo;
//     p->topo = novo;
//     p->tam++;
//   } else {
//     printf("\nErro ao alocar mem�ria.\n");
//   }
// }

// No *desempilhar(Pilha *p) {
//   if (p->topo) {
//     No *remover = p->topo;
//     p->topo = remover->proximo;
//     p->tam--;
//     return remover;
//   } else {
//     printf("\nPilha vazia.\n");
//     return NULL;
//   }
// }

// void imprimir_pilha(Pilha *p) {
//   No *aux = p->topo;
//   while (aux) {
//     imprimir(aux->p);
//     aux = aux->proximo;
//   }
// }

// int main(void) {
//   No *remover;
//   Pilha p;
//   int opcao;
//   criar(&p);
//   do {
//     printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
//     scanf("%d", &opcao);
//     getchar();
//     switch (opcao) {
//     case 1:
//       empilhar(&p);
//       break;
//     case 2:
//       remover = desempilhar(&p);
//       if (remover) {
//         printf("\nElemento removido.\n");
//         imprimir(remover->p);
//         free(remover);
//       } else {
//         printf("\nElemento n�o existe.\n");
//       }
//       break;
//     case 3:
//       imprimir_pilha(&p);
//       break;
//     default:
//       if (opcao != 0)
//         printf("\nOp��o inv�lida.\n");
//     }
//   } while (opcao != 0);

//   // Liberar a mem�ria alocada para os elementos da pilha
//   while (p.topo) {
//     remover = desempilhar(&p);
//     free(remover);
//   }

//   return 0;
// }


//#include "pilha.h"
//#include <stdio.h>
//#include <stdlib.h>
//
//int fatorial(int num) {
//  No *remover, *pilha = NULL;
//  while (num > 1) {
//    empilhar(pilha, num);
//    num--;
//  }
//  imprimir(pilha);
//  while (pilha) {
//    remover = desempilhar(&pilha);
//    num = num * remover->valor;
//    free(remover);
//  }
//  return num;
//}
//
//int forma_par(char f, char d) {
//  switch (f) {
//  case ')':
//    if (d == '(')
//      return 1;
//    else
//      return 0;
//  case ']':
//    if (d == '[')
//      return 1;
//    else
//      return 0;
//  case '}':
//    if (d == '{')
//      return 1;
//    else
//      return 0;
//  }
//  return 0;
//}
//
//int identifica_formacao(char x[]) {
//  int i = 0;
//  No *remover, *pilha = NULL;
//  while (x[i] != '\0') {
//    if (forma_par(x[i], remover->caractere)) {
//      printf("\nExpress�o mal formada.\n");
//      return 1;
//    }
//    free(remover);
//    i++;
//  }
//  imprimir(pilha);
//  if (pilha)
//    return 1;
//  else
//    return 0;
//}
//
//int main(void) {
//  char exp[100];
//  printf("\nDigite uma express�o: ");
//  scanf("%99[^\n]", exp);
//  printf("\nExpress�o: %s\nRetorno: %d\n", exp, identifica_formacao(exp));
//  if (pilha) {
//    printf("\nExpress�o mal formada.\n");
//    return 1;
//  } else {
//    printf("\nExpress�o bem formada.\n");
//    return 0;
//  }
//}


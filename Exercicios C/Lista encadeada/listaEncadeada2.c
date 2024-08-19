// #include <stdio.h>
// #include <stdlib.h>

// typedef struct{
//   int dia, mes, ano;
// }Data;

// typedef struct{
//   char rua[30];
//   char bairro[30];
//   char cidade[30];
//   char pais[30];
//   int num, cep;  
// }Endereco;

// typedef struct{
//   int codigo;
//   Data dataAss;
//   char cargo[30];
//   float salario;
// }Contrato;

// typedef struct{
//   char nome[30];
//   Data dataNas;
//   Endereco end;
//   Contrato contr;
// }Pessoa;

// typedef struct no{
//   Pessoa p;
//   struct no *proximo;
// }No;

// void imprimirData(Data d){
//   printf("%2d/%2d/%4d\n", d.dia, d.mes, d.ano);
// }

// void imprimirEndereco(Endereco e){
//   printf("\nEndereço:\n");
//   printf("Rua: %s\t", e.rua);
//   printf("Nº %d\t", e.num);
//   printf("Bairro: %s\n", e.bairro);
//   printf("CEP: %d\t", e.cep);
//   printf("Cidade: %s\t", e.cidade);
//   printf("País: %s\n", e.pais);
// }

// void imprimirContrato(Contrato c){
//   printf("\nContrato: %d\n", c.codigo);
//   printf("Cargo: %s\t", c.cargo);
//   printf("Salário %.2f\t", c.salario);
//   printf("Admissão: ");
//   imprimirData(c.dataAss);
//   printf("**********\n");
// }

// void imprimirPessoa(Pessoa p){
//   printf("\nNome: %s\n", p.nome);
//   printf("Nascimento: ");
//   imprimirData(p.dataNas);
//   imprimirEndereco(p.end);
//   imprimirContrato(p.contr);
//   printf("\n");
// }

// Data ler_data(){
//   Data d;
//   printf("\nData dd mm aaaa: ");
//   scanf("%d%d%d", &d.dia, &d.mes, &d.ano);
//   getchar();
//   return d;
// }

// Endereco ler_endereco(){
//   Endereco e;

//   printf("Rua: ");
//   scanf(" %29[^\n]", e.rua);
//   printf("\tNº: ");
//   scanf("%d", &e.num);
//   printf("\tBairro: ");
//   scanf(" %29[^\n]", e.bairro);
//   printf("\nCEP: ");
//   scanf("%d", &e.cep);
//   printf("\tCidade: ");
//   scanf(" %29[^\n]", e.cidade);
//   printf("\tPaís: ");
//   scanf(" %29[^\n]", e.pais);

//   return e;
// }

// Contrato ler_contrato(){
//   Contrato c;
//   printf("\nContrato: ");
//   scanf("%d", &c.codigo);
//   printf("\tCargo: ");
//   scanf(" %29[^\n]", c.cargo);
//   printf("\nSalário R$ ");
//   scanf("%f", &c.salario);
//   printf("\tAdmissão: ");
//   c.dataAss = ler_data();
//   return c;
// }

// Pessoa ler_pessoa(){
//   Pessoa p;
//   printf("\nNome: ");
//   scanf(" %29[^\n]", p.nome);  
//   printf("\nData de nascimento: ");
//   p.dataNas = ler_data();
//   p.contr = ler_contrato();
//   p.end = ler_endereco();
//   return p;
// }

// void inserir_inicio(No **lista, Pessoa p){
//   No *novo = malloc(sizeof(No));

//   if(novo){
//     novo->p = p;
//     novo->proximo = *lista;
//     *lista = novo;
//   }else
//     printf("Erro ao alocar memória.\n");
// }

// void inserir_fim(No **lista, Pessoa p){
//   No *aux, *novo = malloc(sizeof(No));

//   if(novo){
//     novo->p = p;
//     novo->proximo = NULL;

//     if(*lista == NULL)
//       *lista = novo;
//     else{
//       aux = *lista;
//       while(aux->proximo)
//         aux = aux->proximo;
//       aux->proximo = novo;
//     }
//   }else
//     printf("Erro ao alocar memória.\n");
// }

// void imprimir(No *no){
//   printf("\nLista: ");
//   while(no){
//     imprimirPessoa(no->p);
//     no = no->proximo;
//   }
//   printf("\n\n");
// }

// int main(void) {
//   int opcao, valor, anterior;
//   No *no, *lista = NULL;
//   Pessoa p;

//   do{
//     printf("\n0 - Sair\n1 - Inserir no início\n2 - Inserir no fim\n3 - Imprimir\n\n");
//     scanf("%d", &opcao);

//     switch(opcao){
//       case 1:
//         p = ler_pessoa();
//         inserir_inicio(&lista, p);
//         break;
//       case 2:
//         p = ler_pessoa();
//         inserir_fim(&lista, p);
//         break;
//       case 3:
//         imprimir(lista);
//         break;      
//       default:
//         if(opcao != 0)
//           printf("Opção inválida.\n");
//     }
//   }while(opcao != 0);
//   return 0;
// }


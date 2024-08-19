#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

#define TAMANHO_MAXIMO_SEQUENCIA 50
#define TAMANHO_CODIGO_GENETICO 3
#define NUMERO_CODIGOS_GENETICOS 20

//Estrutura para armazenar os c�digos gen�ticos
typedef struct {
    char codigo[TAMANHO_CODIGO_GENETICO + 1];
    char nome[20]; //Nome do c�digo gen�tico
} CodigoGenetico;

//Estrutura para armazenar os motivos gen�ticos encontrados
typedef struct MotivoGenetico {
    char codigo[TAMANHO_CODIGO_GENETICO + 1];
    int posicaoInicial;
    struct MotivoGenetico *prox;
} MotivoGenetico;

//Declara��o dos c�digos gen�ticos com seus nomes
CodigoGenetico codigosGeneticos[NUMERO_CODIGOS_GENETICOS] = {
    {"TGT", "Cysteine"}, {"AGT", "Serina"}, {"GGT", "Glicina"}, {"TAT", "Tirosina"}, {"CAA", "Glutomina"},
    {"AAT", "Asparagina"}, {"AAA", "Lisina"}, {"GAT", "�cido Asp�rtico"}, {"GCT", "Alonina"}, {"ACA", "Prolina"},
    {"TTT", "Fenilalanina"}, {"ATT", "Isoleucina"}, {"ATC", "Isoleucina"}, {"CTG", "Leucina"}, {"AAG", "Lisina"},
    {"CGC", "Arginina"}, {"TGC", "Ciste�na"}, {"GGG", "Glicina"}, {"GAA", "Glutamato"}, {"CCC", "Prolina"}
};

//Fun��o para verificar se uma sequ�ncia de 3 letras corresponde a um c�digo gen�tico
bool ehCodigoGenetico(char *subsequencia) {
	int i;
    for (i = 0; i < NUMERO_CODIGOS_GENETICOS; i++) {
        if (strcmp(subsequencia, codigosGeneticos[i].codigo) == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    setlocale(LC_ALL, "portuguese");

    char sequenciaDNA[TAMANHO_MAXIMO_SEQUENCIA + 1];
    printf("Digite a sequ�ncia de DNA (at� %d letras): ", TAMANHO_MAXIMO_SEQUENCIA);
    scanf("%s", sequenciaDNA);

    //Declara��o das estruturas de dados
    char pilha[TAMANHO_CODIGO_GENETICO + 1]; //Pilha para armazenar os grupos de letras
    int topoPilha = -1; //Topo da pilha
    MotivoGenetico *listaMotivos = NULL; //Lista para armazenar os motivos gen�ticos encontrados
    int posicaoInicial; //Posi��o inicial do grupo de letras na sequ�ncia
    int i, j; //�ndices para os loops for

    //Vetor para armazenar as letras que n�o s�o motivos gen�ticos
    char letrasNaoMotivos[TAMANHO_MAXIMO_SEQUENCIA + 1];
    int topoLetrasNaoMotivos = -1; // Topo do vetor de letras n�o motivos

    //Processamento da sequ�ncia de DNA
    //Processamento da sequ�ncia de DNA
int tamanhoSequencia = strlen(sequenciaDNA);
for (i = 0; i < tamanhoSequencia; i++) {
    //Adiciona a pr�xima letra � pilha
    topoPilha++;
    pilha[topoPilha] = sequenciaDNA[i];
    pilha[topoPilha + 1] = '\0';

    //Verifica se a pilha tem 3 letras
    if (topoPilha >= TAMANHO_CODIGO_GENETICO - 1) {
        //Verifica se o grupo de letras forma um c�digo gen�tico v�lido
        if (ehCodigoGenetico(pilha)) {
            //Armazena a posi��o inicial do grupo na fila
            posicaoInicial = i - TAMANHO_CODIGO_GENETICO + 1;
            //Armazena o grupo na lista de motivos gen�ticos
            MotivoGenetico *novoMotivo = (MotivoGenetico *)malloc(sizeof(MotivoGenetico));
            strcpy(novoMotivo->codigo, pilha);
            novoMotivo->posicaoInicial = posicaoInicial;
            novoMotivo->prox = listaMotivos;
            listaMotivos = novoMotivo;
            
            topoPilha = -1; //Reinicia a pilha ap�s adicionar o c�digo gen�tico � lista
        } else {
            //Se n�o for um c�digo gen�tico v�lido, armazena a letra no vetor de letras n�o motivos
            topoLetrasNaoMotivos++;
            letrasNaoMotivos[topoLetrasNaoMotivos] = pilha[0];
            //Reinicia a pilha apenas se n�o for um c�digo gen�tico v�lido
            topoPilha = -1;
        }
    }
}

    //Imprime as letras que n�o s�o motivos gen�ticos e suas posi��es
    printf("\nLetras que n�o s�o motivos gen�ticos:\n");
    for (i = 0; i <= topoLetrasNaoMotivos; i++) {
        printf("%c, posi��o: %d\n", letrasNaoMotivos[i], i);
    }

    //Imprime os motivos gen�ticos encontrados
    MotivoGenetico *atual = listaMotivos;
    printf("\nMotivos gen�ticos encontrados:\n");
    while (atual != NULL) {
        //Busca o nome do c�digo gen�tico pelo c�digo
        char nomeCodigo[20];
        for (i = 0; i < NUMERO_CODIGOS_GENETICOS; i++) {
            if (strcmp(atual->codigo, codigosGeneticos[i].codigo) == 0) {
                strcpy(nomeCodigo, codigosGeneticos[i].nome);
                break;
            }
        }
        printf("%s(%s), posi��o inicial: %d\n", atual->codigo, nomeCodigo, atual->posicaoInicial);
        atual = atual->prox;
    }

    //Libera a mem�ria alocada para a lista de motivos gen�ticos
    atual = listaMotivos;
    while (atual != NULL) {
        MotivoGenetico *temp = atual;
        atual = atual->prox;
        free(temp);
    }

    return 0;
}


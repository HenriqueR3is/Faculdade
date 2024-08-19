#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

#define TAMANHO_MAXIMO_SEQUENCIA 50
#define TAMANHO_CODIGO_GENETICO 3
#define NUMERO_CODIGOS_GENETICOS 20

//Estrutura para armazenar os códigos genéticos
typedef struct {
    char codigo[TAMANHO_CODIGO_GENETICO + 1];
    char nome[20]; //Nome do código genético
} CodigoGenetico;

//Estrutura para armazenar os motivos genéticos encontrados
typedef struct MotivoGenetico {
    char codigo[TAMANHO_CODIGO_GENETICO + 1];
    int posicaoInicial;
    struct MotivoGenetico *prox;
} MotivoGenetico;

//Declaração dos códigos genéticos com seus nomes
CodigoGenetico codigosGeneticos[NUMERO_CODIGOS_GENETICOS] = {
    {"TGT", "Cysteine"}, {"AGT", "Serina"}, {"GGT", "Glicina"}, {"TAT", "Tirosina"}, {"CAA", "Glutomina"},
    {"AAT", "Asparagina"}, {"AAA", "Lisina"}, {"GAT", "Ácido Aspártico"}, {"GCT", "Alonina"}, {"ACA", "Prolina"},
    {"TTT", "Fenilalanina"}, {"ATT", "Isoleucina"}, {"ATC", "Isoleucina"}, {"CTG", "Leucina"}, {"AAG", "Lisina"},
    {"CGC", "Arginina"}, {"TGC", "Cisteína"}, {"GGG", "Glicina"}, {"GAA", "Glutamato"}, {"CCC", "Prolina"}
};

//Função para verificar se uma sequência de 3 letras corresponde a um código genético
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
    printf("Digite a sequência de DNA (até %d letras): ", TAMANHO_MAXIMO_SEQUENCIA);
    scanf("%s", sequenciaDNA);

    //Declaração das estruturas de dados
    char pilha[TAMANHO_CODIGO_GENETICO + 1]; //Pilha para armazenar os grupos de letras
    int topoPilha = -1; //Topo da pilha
    MotivoGenetico *listaMotivos = NULL; //Lista para armazenar os motivos genéticos encontrados
    int posicaoInicial; //Posição inicial do grupo de letras na sequência
    int i, j; //Índices para os loops for

    //Vetor para armazenar as letras que não são motivos genéticos
    char letrasNaoMotivos[TAMANHO_MAXIMO_SEQUENCIA + 1];
    int topoLetrasNaoMotivos = -1; // Topo do vetor de letras não motivos

    //Processamento da sequência de DNA
    //Processamento da sequência de DNA
int tamanhoSequencia = strlen(sequenciaDNA);
for (i = 0; i < tamanhoSequencia; i++) {
    //Adiciona a próxima letra à pilha
    topoPilha++;
    pilha[topoPilha] = sequenciaDNA[i];
    pilha[topoPilha + 1] = '\0';

    //Verifica se a pilha tem 3 letras
    if (topoPilha >= TAMANHO_CODIGO_GENETICO - 1) {
        //Verifica se o grupo de letras forma um código genético válido
        if (ehCodigoGenetico(pilha)) {
            //Armazena a posição inicial do grupo na fila
            posicaoInicial = i - TAMANHO_CODIGO_GENETICO + 1;
            //Armazena o grupo na lista de motivos genéticos
            MotivoGenetico *novoMotivo = (MotivoGenetico *)malloc(sizeof(MotivoGenetico));
            strcpy(novoMotivo->codigo, pilha);
            novoMotivo->posicaoInicial = posicaoInicial;
            novoMotivo->prox = listaMotivos;
            listaMotivos = novoMotivo;
            
            topoPilha = -1; //Reinicia a pilha após adicionar o código genético à lista
        } else {
            //Se não for um código genético válido, armazena a letra no vetor de letras não motivos
            topoLetrasNaoMotivos++;
            letrasNaoMotivos[topoLetrasNaoMotivos] = pilha[0];
            //Reinicia a pilha apenas se não for um código genético válido
            topoPilha = -1;
        }
    }
}

    //Imprime as letras que não são motivos genéticos e suas posições
    printf("\nLetras que não são motivos genéticos:\n");
    for (i = 0; i <= topoLetrasNaoMotivos; i++) {
        printf("%c, posição: %d\n", letrasNaoMotivos[i], i);
    }

    //Imprime os motivos genéticos encontrados
    MotivoGenetico *atual = listaMotivos;
    printf("\nMotivos genéticos encontrados:\n");
    while (atual != NULL) {
        //Busca o nome do código genético pelo código
        char nomeCodigo[20];
        for (i = 0; i < NUMERO_CODIGOS_GENETICOS; i++) {
            if (strcmp(atual->codigo, codigosGeneticos[i].codigo) == 0) {
                strcpy(nomeCodigo, codigosGeneticos[i].nome);
                break;
            }
        }
        printf("%s(%s), posição inicial: %d\n", atual->codigo, nomeCodigo, atual->posicaoInicial);
        atual = atual->prox;
    }

    //Libera a memória alocada para a lista de motivos genéticos
    atual = listaMotivos;
    while (atual != NULL) {
        MotivoGenetico *temp = atual;
        atual = atual->prox;
        free(temp);
    }

    return 0;
}


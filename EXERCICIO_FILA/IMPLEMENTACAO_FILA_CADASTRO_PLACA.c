#include<stdio.h>
#include<stdlib.h>
/*PRODUCAO DO CODIGO: 07/05/2020 DESENVOLVEDOR: BRUNO HENRIQUE RAIHER (GITHUB: BHRAIHER)
  MANUTENCAO DO CODIGO: --/--/--*/

/*
    DESAFIO ERA USAR A LISTA PARA CONSTRUIR UMA FILA DE CHEGADA DE VEICULOS EM UMA FILA,POR ORDEM DE CHEGADA.
*/

int sequencial = 1;
struct registro
{
    int reg;
    char placa[20];
};

struct  Node{//criando o tipo do elemento da lista
    struct registro fila;//dado;;
    struct Node *prox;
};
typedef struct Node node;//apelido
typedef node *LISTA;//declaração ponteiro da cabeça da lista


LISTA* criarLista(){
    LISTA *li =(LISTA*) malloc (sizeof(LISTA));//aloca cabeça da lista
    if(li != NULL){
        *li=NULL;
    }else{
        printf("Erro na alocação...\n");
        exit(0);
    }
    return li;
}

void insereFinal(LISTA* lista){
    node *novo = (node*) malloc (sizeof(node));//declara e aloca
    novo->fila.reg = 0;
    if(novo == NULL){
        printf("ERRO NA ALOCACAO...\n");
        exit(0);
    }

    printf("INFORME A PLACA\n");
    scanf("%s",&novo->fila.placa);

    novo->prox = NULL; // novo final da lista
    if ((*lista) == NULL){//se lista vazia
        sequencial = 1; //se for um novo item na lista, reinicia a contagem do sequencial.
        *lista = novo;
    }else{
        node *tmp;// no temporário
        tmp = (*lista);
        while (tmp->prox != NULL){//busca o ultimo elemento
            tmp = tmp->prox;
        }
        tmp->prox = novo;
    }
    novo->fila.reg = sequencial++;;
    printf("\n\n");
}

int removeInicio(LISTA* lista){
	if((*lista) != NULL){
		node *proxNode, *tmp;
		tmp = *lista;
		proxNode = tmp->prox;
		*lista = proxNode;
		free(tmp);
		printf("Elemento removido com sucesso...\n");
	}else{
		printf("Lista ja esta vazia... \n");
	}
}

void exibe(LISTA* lista){
    if( (*lista) == NULL){
        printf("LISTA VAZIA...\n");
    }else{
        node *tmp;// no temporário
        tmp = (*lista);
        printf("------\PLACAS CADASTRADAS------\n");
        while (tmp != NULL){
            printf("%d - %s\n",tmp->fila.reg, tmp->fila.placa);
            tmp = tmp->prox;
        }
    }
    printf("\n\n\n");

}

void libera(LISTA* lista){
    if((*lista) == NULL){
        printf("LISTA VAZIA...\n");

    }else{
        node *tmp;
        while ((*lista) != NULL){
            tmp = *lista;
            *lista = (*lista)->prox;
            free(tmp);
        }
        *lista=NULL;
    }
    sequencial = 1;
}




int main(){
    LISTA *lista = criarLista();
    int op;
    do{
    printf("O que deseja:\n");
    printf("1 - INSERIR\n");
    printf("2 - REMOVER\n");
    printf("3 - MOSTRAR LISTA\n");
    printf("4 - LIBERAR LISTA\n");

    printf("0 - SAIR\n");
    scanf("%d",&op);
    switch(op){
    case 1:
        insereFinal(lista);
        break;
    case 2:
        removeInicio(lista);
        break;
    case 3:
        exibe(lista);
        break;
    case 4:
        libera(lista);
        break;
    default:
        printf("Opcao nao cadastrada...\n");
        break;
    }
    }while(op != 0);
    free(lista);
}

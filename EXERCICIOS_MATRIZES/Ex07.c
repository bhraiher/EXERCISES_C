#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<time.h>
/*PRODUCAO DO CODIGO: 10/05/2020 DESENVOLVEDOR: BRUNO HENRIQUE RAIHER (GITHUB: BHRAIHER)
  MANUTENCAO DO CODIGO: --/--/--*/

/*
    DESAFIO do quadrado mágico, em que ele eh magico quando a soma de todas as linhas, colunas, e diagonais, da o mesmo resultado.
    Deve-se pedir ao usuario o tamanho da matriz e verificar se eh magico a matriz.
*/

int main(){
    int t = 0;
    int i,j,soma;
    int opcao = 0;
    int vetSomaLinha[t], vetSomaColuna[t];
    int somaDiagonal1 = 0;
    int somaDiagonal2 = 0;
    int teste;

    printf("QUAL O TAMANHO DO VETOR?\nREPOSTA: ");
    scanf("%d",&t);
    int matriz[t][t];

    srand(time(NULL));
    //ATRIBUINDO VALOR PARA A MATRIZ
    printf("1 - INFORMAR MANUALMENTE O VALOR DOS ITENS\n"
           "2 - GERAR VALORES AUTOMATICAMENTE\nRESPOSTA: ");
    scanf("%d",&opcao);

    switch(opcao){
    case 1:
        for(i=0; i<t;i++){
            for(j=0;j<t;j++){
                printf("VALOR PARA A POSICAO [%d][%d]: ",i,j);
                scanf("%d", &matriz[i][j]);
            }
        }
        printf("\n\n");
        break;
    case 2:
        for(i=0; i<t;i++){
            for(j=0;j<t;j++){
                matriz[i][j] = (rand() % 10);
            }
        }
        break;
    default:
        printf("NEM UMA OPCAO VALIDA FOI INFORMADA.\n");
        exit(0);
   }

    //PRINTANDO A MATRIZ
    for(i=0; i<t;i++){
         printf("|");
        for(j=0;j<t;j++){
            printf("%2d",matriz[i][j]);
        }
        printf("|");
        printf("\n\n");
    }


    /*=======SOMAS DE VERIFICACAO=======*/
    //=======SOMA LINHA=======
    for(i=0; i < t;i++){
        soma = 0;
        for(j=0;j<t;j++){
            soma += (matriz[i][j]);
        }
        vetSomaLinha[i] = soma;
    }

    printf("VETOR SOMA LINHA\n");
    printf("[ ");
    for(i=0;i<t;i++){
        printf("%2d ", vetSomaLinha[i]);
    }
    printf("]\n\n");

    //=======SOMA COLUNA=======
    for(j=0; j<t;j++){
        soma = 0;
        for(i=0;i<t;i++){
            soma += (matriz[i][j]);
        }
        vetSomaColuna[j] = soma;
    }


    printf("VETOR SOMA COLUNA\n");
    printf("[ ");
    for(i=0;i<t;i++){
        printf("%2d ", vetSomaColuna[i]);
    }
    printf("]\n\n");

    //=======SOMA DIAGONAIS=======
    //SOMA DIAGONAL 1
    for(i=0; i<t;i++){
        soma = 0;
        for(j=0;j<t;j++){
            if(i == j){
                soma += (matriz[i][j]);
            }

        }
        somaDiagonal1 += soma;


    }
    printf("VETOR SOMA DIAGONAL 1\n");
    printf("%d",somaDiagonal1);
    printf("\n\n");

    //SOMA DIAGONAL 2
    j=0;
    for(i=(t-1); i >= 0 ;i--){
        if(j < t ){
            somaDiagonal2 += (matriz[i][j]);
        }
        j++;
    }

    printf("VETOR SOMA DIAGONAL 2\n");
    printf("%d",somaDiagonal2);
    printf("\n\n");


    /*VERIFICACAO SE A MATRIZ E UM QUADRADO MAGICO*/
    teste = vetSomaLinha[0];
    int tt = 1;
    for(i = 0; i < t; i++){
        if (vetSomaLinha[i] != teste){
            tt = 0;
        }
    }
    for(i = 0; i < t; i++){
        if (vetSomaColuna[i] != teste){
            tt = 0;
        }
    }
    if(somaDiagonal1 != teste){
        tt = 0;
    }
    if(somaDiagonal2 != teste){
        tt = 0;
    }

    if(tt == 1){
        printf("PARABENS!! A MATRIZ EH UM QUADRADO MAGICO!!\n");
    }else{
        printf("A SUA MATRIZ NAO EH UM QUADRADO MAGICO!!\n");
    }


    return 0;
    system("pause");

}

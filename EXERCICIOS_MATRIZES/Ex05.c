#include<stdio.h>
#include<stdlib.h>
/*PRODUCAO DO CODIGO: 02/04/2020 DESENVOLVEDOR: BRUNO HENRIQUE RAIHER (GITHUB: BHRAIHER)
  MANUTENCAO DO CODIGO: --/--/--*/

/*Faça um programa que leia uma matriz numérica 5 X 5 e calcule a soma dos elementos da diagonal principal.
 Mostrar na tela a matriz original e a soma*/
int main(){
    int matriz[5][5];
    int i,j,soma;
    soma = 0;
    /*LENDO OS NUMEROS DA MATRIZ*/
    printf("VOCE INFORMARA OS VALORES DA MATRIZ!!\n\n");
    for(i = 0; i < 5; ++i){
        for(j = 0; j < 5; j++){
            //matriz[i][j] = i+j; <- para caso queira inserir valores aleatorios. (usei para teste).
            printf("VALOR PARA LINHA %d COLUNA %d: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    //REALIZANDO A SOMA
    for(i = 0; i < 5; ++i){
        for(j = 0; j < 5; j++){
            if(i == j){
                soma += matriz[i][j];
            }
        }
    }

    //IMPRIMINDO MATRIZ E SOMA
    for(i = 0; i < 5; ++i){
        printf("|");
        for(j = 0; j < 5; j++){
            printf("  %d",matriz[i][j]);
        }
        printf("  |\n");
    }
    printf("Total da soma: %d\n\n",soma);
    system("pause");
}

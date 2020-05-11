#include<stdio.h>
#include<stdlib.h>
/*PRODUCAO DO CODIGO: 02/04/2020 DESENVOLVEDOR: BRUNO HENRIQUE RAIHER (GITHUB: BHRAIHER)
  MANUTENCAO DO CODIGO: --/--/--*/

/*Criar uma matriz 3X3, contendo números inteiros, e armazene a soma de cada linha dentro de um vetor. */
int main(){
    int matriz[3][3];
    int vetsoma[3];
    int i,j, soma;
    soma = 0;

    //ATRIBUINDO VALOR A MATRIZ
    for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; j++){
            matriz[i][j] = i+j+3;
        }
    }

    //REALIZANDO A SOMA
    for(i = 0; i < 3; ++i){
        soma = 0;
        for(j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
        printf("SOMA LINHA %d: %d\n", i+1,soma);
        vetsoma[i] = soma;
    }

    //PRINTANDO A MATRIZ E O VETOR COM A SOMA
    for(i = 0; i < 3; ++i){
        printf("|");
        for(j = 0; j < 3; j++){
            printf("  %d", matriz[i][j]);
        }
        printf("  |");
        printf("\n");
    }
    printf("\n");
    int cont;
    printf("VETOR DA SOMA: [");
    for(cont = 0; cont < 3; cont++){
        if(cont == 2){
            printf("%d]\n",vetsoma[cont]);
        }else{
            printf("%d, ",vetsoma[cont]);
        }

    }


    system("pause");
}



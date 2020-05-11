#include<stdio.h>
#include<stdlib.h>
/*PRODUCAO DO CODIGO: 31/03/2020 DESENVOLVEDOR: BRUNO HENRIQUE RAIHER (GITHUB: BHRAIHER)
  MANUTENCAO DO CODIGO: --/--/--*/

/*
Criar dois vetores A e B cada um com 10 elementos inteiros.
Construir um vetor C de mesmo tipo e tamanho, obedecendo as regras de forma��o.
*/
int main(){
    int vetA[10] = {0,1,1,5,6,5,6,10,3,2};
    int vetB[10], vetC[10];
    int i;


    /*for(i=0;i<10;i++){
        vetA[i] = i;
    }*/
    for(i=0;i<10;i++){
        vetB[i] = i;
    }
    for(i=0;i<10;i++){
        /*Ci dever� receber 1 quando A[i] for maior que B[i]*/
        if(vetA[i] > vetB[i]){
             vetC[i] = 1;
        }
        /* Ci dever� receber 0 quando A[i] for igual a B[i]; */
        if(vetA[i] == vetB[i]){
            vetC[i] = 0;
        }
        /*Ci dever� receber -1 quando A[i] for menor que B[i].*/
        if(vetA[i] < vetB[i]){
            vetC[i] = -1;
        }
    }

    /*PRINTANDO O VETOR C*/
    printf("Vetor C: [");
    for(i=0;i<10;i++){
        if(i==9){
            printf("%d]\n", vetC[i]);
        }else{
            printf("%d, ", vetC[i]);
        }

    }
    system("pause");
}

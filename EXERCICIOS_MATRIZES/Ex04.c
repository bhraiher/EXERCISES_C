#include<stdio.h>
#include<stdlib.h>
/*PRODUCAO DO CODIGO: 31/03/2020 DESENVOLVEDOR: BRUNO HENRIQUE RAIHER (GITHUB: BHRAIHER)
  MANUTENCAO DO CODIGO: --/--/--*/

/*Fa�a um programa onde o usu�rio preenche um vetor de 10 posi��es contendo n�meros inteiro,
em seguida apresenta o vetor ordenado na tela (utilizar qualquer m�todo). */

int main(){
    int vet[10], vetORD[10];
    int i;

    /*RECEBENDO OS DADOS DO USUARIO*/
    printf("VOCE DEVERA INFORMAR OS NUMEROS DO VETOR\n");
    for(i=0;i<10;i++){
        printf("INFORME A POSICAO %d DO VETOR: ", i);
        scanf("%d", &vet[i]);
    }

    int maior = 0;

    int j;

    for(i=0;i<10;i++){
        if(vet[i] > vet[maior]){
            maior = i;
        }
    }
    int menor;
    for(j = 0; j < 10; j++){
        menor = 0;
        for(i=0;i<10;i++){
            if(vet[i] < vet[menor]){
            menor = i;
            }
        }
        vetORD[j] = vet[menor];
        //printf("ORD J%d: %d -", j,vetORD[j]);
        vet[menor] = vet[maior];
    }


    /*PRINT VETOR*/
    printf("[");
    for(i=0;i<10;i++){
        if(i==9){
            printf("%d]\n", vetORD[i]);
        }else{
            printf("%d, ", vetORD[i]);
        }

    }

    return 0;
    system("pause");
}

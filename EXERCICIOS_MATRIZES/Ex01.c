#include <stdio.h>
/*PRODUCAO DO CODIGO: 31/03/2020 DESENVOLVEDOR: BRUNO HENRIQUE RAIHER (GITHUB: BHRAIHER)
  MANUTENCAO DO CODIGO: --/--/--*/

/*Crie um vetor de 8 posi��es contendo n�meros inteiros informados pelo usu�rio, calcular a m�dia dos valor e informar quantos valores est�o acima da m�dia*/

int main(void){
    int vet1[8];
    int x,tam_vet, tam_vet2, soma_total, cont;
    float media;

    media = 0.0;
    soma_total = 0;
    cont = 0;
    tam_vet = 8;

    /*LENDO OS 8 NUMEROS DO VETOR*/
    for(x = 0; tam_vet > x; x++){
        printf("Informe o numero da posicao %i do vetor: ", x+1);
        scanf("%i", &vet1[x]);
    }

    /*EXIBIR O CONTEUDO DO VETOR*/

    printf("]\n\n");

    /*CALCULO DE MEDIA DOS NUMEROS*/
    for(x = 0; tam_vet > x; x++){
        soma_total += vet1[x];
        }
    media = soma_total/tam_vet;
    printf("Valor da soma: %i\n", soma_total);
    printf("Valor da media: %f\n", media);

    /*MOSTRA OS NUMEROS ACIMA DA MEDIA*/
    for(x = 0; tam_vet > x; x++){
            if(vet1[x]>media){
                cont +=1;
            }
        }

    printf("Numeros acima da media (primeiro): %i\n", cont);
    int vet2[cont];
    tam_vet2 = cont;
    cont = 0;
    for(x = 0; tam_vet > x; x++){
            if(vet1[x]>media){
                vet2[cont] = vet1[x];
                cont +=1;
            }
        }

    for(x = 0; tam_vet2 > x; x++){
        printf("%i", vet2[x]);
    }
    printf("\n");
    printf("Numeros acima da media (final): %i\n", cont);
    system("pause");
}

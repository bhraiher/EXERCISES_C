/*Criar 2 vetores de 5 posições cada, e colocar a soma destas posições em um terceiro vetor. */
#include<stdio.h>
#include<stdlib.h>

//CODIGO DE BRUNO HENRIQUE RAIHER, GitHub: @bhraiher
int main() {
    int vet1[5], vet2[5], vetResult[5];
    int i;

    //Atribuir a posição ao vetor.
    for(i = 0; i < 5; i++){
        vet1[i] = i;
    }
    for(i = 0; i < 5; i++){
        vet2[i] = i;
    }

    //PRINTANDO OS VETORES 1 E 2
    printf("[");
    for (i=0; i<5;i++){
        if (i == 4){
         printf("%d", vet1[i]);
        }else{
        printf("%d, ", vet1[i]);
        }
    }
    printf("]\n");

    printf("[");
    for (i=0; i<5;i++){
        if (i == 4){
         printf("%d", vet2[i]);
        }else{
        printf("%d, ", vet2[i]);
        }
    }
    printf("]\n\n");

    //REALIZANDO A SOMA E PRINTANDO O VETOR COM RESULTADO
    for(i=0;i<5;i++){
        vetResult[i] = vet1[i] + vet2[i];
    }

    printf("Vetor com a soma: [");
    for (i=0; i<5;i++){
        if (i == 4){
         printf("%d", vetResult[i]);
        }else{
        printf("%d, ", vetResult[i]);
        }
    }
    printf("]\n");







}

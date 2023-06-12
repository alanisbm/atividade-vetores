#include <stdio.h>
#define TAM 3

int main()
{
    int vetor[10],i,maior,menor;
    for(int i=0; i<=9; i++){
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);}
    maior = vetor [0];
    for (i = 1; i < 10; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    menor = vetor[0];
    for (i = 1; i < 10; i++){
        if (vetor[i] > maior){
            menor = vetor[i];}
    }
    printf("\nMaior valor: %i", maior);
    printf ("\nMenor valor: %i", menor);
    printf ("\nMenor valor: %i", maior-menor);
}
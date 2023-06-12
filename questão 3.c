#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10],i,impares = 0;
    for(int i=0; i<=9; i++){
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);}
    for (i=0; i < 10; i++) {
        if (vetor[i]%2 == 1) {
            impares++;
        }
    }
    for(int indice=0; indice<=9;indice++){
        printf("%d \n", vetor[indice]);
    }
    return 0;
}
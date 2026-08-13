#include<stdio.h>

void main(){
    int idade;
    float altura;
    char letraFavorita;
    char margem[] = "\n----------------------";

    printf("Qual a sua idade?: ");
    scanf("%i", &idade);
    printf("\nQual a sua altura?: ");
    scanf("%f", &altura);
    printf("\nQual a sua letra favorita?: ");
    scanf(" %c", &letraFavorita);
    
    printf(margem);
    printf("\nEntendi!! \nSua idade e %i, altura %f e letra favorita %c", idade, altura, letraFavorita);
    printf(margem);
}
#include<stdio.h>

int main (){
    //Caracteres
    char nome_da_variavel= 'a';  // -128 até 127
    unsigned char variavel_unsigned = 'u'; // 0 até 255
    printf("\nImprimindo texto tipo char %c \n", nome_da_variavel);
    printf("Imprimindo texto tipo unsigned char %u \n", variavel_unsigned);

    //Números inteiros (Conjunto dos inteiros)
    short int nome_da_variavel2 = 2;
    int nome_da_variavel3 = 32;
    long nome_da_variavel4 = -1312412;
    printf("Número tipo short %i \n", nome_da_variavel2);
    printf("Número tipo int %i \n", nome_da_variavel3);
    printf("Número tipo long int %li \n", nome_da_variavel4);

    //Números inteiros apenas positivos (conjunto dos números naturais)
    short unsigned int variavel_unsigned1 = 2;
    unsigned int variavel_unsigned2 = 4213;
    long unsigned int variavel_unsigned3 = 1937730977;
    printf("Número tipo unsigned short %u \n", variavel_unsigned1);
    printf("Número tipo unsigned int %u \n", variavel_unsigned2);
    printf("Número tipo unsigned long int %lu \n", variavel_unsigned3); 

    //Números reais
    float nome_da_variavel5 = 3.4f;
    double nome_da_variavel6 = 3.6;
    long double nome_da_variavel7 = 3.4e-23L;
    printf("Número tipo float %f \n", nome_da_variavel5);
    printf("Número tipo double %f \n", nome_da_variavel6);
    printf("Número tipo long double %d \n", nome_da_variavel7);

    //Constante nomeada
    const int max = 100;
    printf("const int:  %i \n", max);
    return 0;
}
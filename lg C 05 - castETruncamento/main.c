#include<stdio.h>

void main (){
    int a = 3;
    float b = 3.9;
    //int i = (int)b;
    printf("Valor %f CONVERTIDO para int: %i \n", b, /* i  (int)b <<-removido*/ (int)b);
    printf("Valor %i CONVERTIDO para float: %f", a, (float)a);
}
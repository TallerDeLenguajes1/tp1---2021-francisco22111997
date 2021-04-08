#include <stdio.h>


//declaracion de la funcion
float calcularCuadrado(float x);

int main()
{

float num;
scanf("%f", &num);

while(num !=0){
// llamo a la funcion que calculo el cuadrado de un numero
float cuadrado;
cuadrado = calcularCuadrado(num);
printf("%f %f/n",num,cuadrado);
scanf("%f", &num);

}

return 0;

}



float calcularCuadrado(float x){


    float cuadrado;
    cuadrado = x * x;
    return cuadrado;

}





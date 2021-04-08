#include <stdio.h>
#include <conio.h>



//declaracion de la funcion
void calcularCuadrado(float num);

int main(){
    float num;
     calcularCuadrado(num);
    printf("\n ---------------------");
    printf("\n Cuadrado de un numero en void");
 
    return 0;

}

void calcularCuadrado(float num){

    
    float  cuadrado;
    
    cuadrado = num * num;
    printf("\n El resultado de %f al cuadrado es %f", num, cuadrado);
  
}
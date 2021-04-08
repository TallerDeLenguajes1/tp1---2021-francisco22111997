#include <stdio.h>

void mostrarDatos(int variable);
void invertir(int a, int b);
void orden(int a, int b);


int main () {


/* Punto c */
    printf("\n ---------------------");
    printf("\n Datos de la variable");

    int variable;

    printf("\n Ingrese un numero: ");
    scanf("%d", &variable);
    mostrarDatos(variable);


    /* Punto d */
    printf("\n ---------------------");
    printf("\n Invertir valores");

    int a, b;
    printf("\n Ingrese el primer valor para invertir: ");
    scanf("%d", &a);
    printf("\n Ingrese el segundo valor: ");
    scanf("%d", &b);

    invertir(a,b);

    /* Punto e */
    printf("\n ---------------------");
    printf("\n Ordenar de menor a mayor");

    printf("\n Ingrese el primer valor para ordenar: ");
    scanf("%d", &a);
    printf("\n Ingrese el segundo valor: ");
    scanf("%d", &b);

    orden(a,b);

    /* Punto f*/
    printf("\n ---------------------");
    printf("\n Imprimir valores");

    printf("\n Ingrese el primer valor: ");
    scanf("%d", &a);
    printf("\n Ingrese el segundo valor: ");
    scanf("%d", &b);

    mostrarDatos(a);
    mostrarDatos(b);


	return 0;
}



void mostrarDatos(int variable){
    printf("\n La direccion de la variable es %p", &variable);
    printf("\n El contenido de la variable es %d", variable);
}

void invertir(int a, int b){
    printf("\n Valor inicial de a es %d y de b es %d", a, b);
    int aux;
    aux = b;
    b = a;
    a = aux;
    printf("\n Valor final de a es %d y de b es %d", a, b);
}

void orden(int a, int b){
    int aux;
    printf("\n El orden inicial es %d - %d", a, b);
    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    } 
    printf("\n El orden acomodado es %d - %d", a, b);
}

    
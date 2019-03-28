#include <stdio.h>
#include <stdlib.h>
int dividir(int numero);
int esDistintoACero(int numero);
int factorial(int numero);
int main()
{

    /*int dato;
    dato = dividir(6);
    printf("El dato es : %d",dato);
    dato = dividir(0);
    printf("El dato es : %d",dato);*/

    int unFactorial;
    unFactorial= factorial(5);
    printf("El factor es : %d",unFactorial);

    /*
    int edad;
    int retorno = 0;
    do{

        printf("Ingrese una edad : ");
        retorno = scanf("%d ",&edad);
        fflush(stdin);
    }while(retorno == 0);

    printf("La respuesta es : %d",retorno);

    printf("La edad es : %d",edad);*/




    return 0;
}
int dividir(int numero)
{

int respuesta;
int resultado;
respuesta = esDistintoACero(numero);
if(respuesta==1){

    resultado = numero/2;
}                                      //2 funciones que devuelven una respuesta en su variable de devolucion, en una el resultado del procesao y en la otra a la pregunta


     return respuesta;

}

int esDistintoACero(int numero)
{
    if(numero !=0){
        return 1;
    }
    return 0;
}
int factorial(int numero) // es el resultado de la multiplicacion de un numero y todos sus antesesores
{
    int respuesta;
    if(numero==1){
        return 1;
    }
    respuesta = numero*factorial(numero - 1);
    return respuesta;
}

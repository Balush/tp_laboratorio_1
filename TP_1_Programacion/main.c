#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <stdbool.h>

int main()
{
    char seguir='s';
    int opcion = 0;
    int primerNumero;
    int segundoNumero;

    bool NumeroIngresado1 = false;
    bool NumeroIngresado2 = false;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
            	printf("Ingrese el primer numero");
                scanf("%d", &primerNumero);
                printf("el primer numero ingresado es : %d\n", primerNumero);
                NumeroIngresado1 = true;
                break;
            case 2:
            	printf("Ingrese el segundo numero");
                scanf("%d", &segundoNumero);
                printf("el segundo numero ingresado es: %d\n", segundoNumero);
                NumeroIngresado2 = true;
                break;
            case 3:
                    if(verificarNumeros(NumeroIngresado1, NumeroIngresado2))
                    {
                        printf("la suma los numeros ingresados  es :%d\n", suma(primerNumero, segundoNumero));
                    }
                    else printf("Primero debe ingresar los numeros seleccionando las opciones 1 y 2 \n");

                    break;

            case 4:
                if(verificarNumeros(NumeroIngresado1, NumeroIngresado2))
                	{
                		printf("la resta de los numeros ingresados es: %d\n", resta(primerNumero, segundoNumero));
                	}
                	 else printf("Primero debe ingresar los numeros seleccionando las opciones 1 y 2 \n");

                    break;

            case 5:
            	if (verificarNumeros(NumeroIngresado1, NumeroIngresado2) && segundoNumero != 0)
            	{
            		printf("La division entre los numeros es: %f \n", division(primerNumero, segundoNumero));
            	}
            	else printf("Primero debe ingresar los numeros seleccionando las opciones 1 y 2 \n");
                    break;

            case 6:
                if (verificarNumeros(NumeroIngresado1, NumeroIngresado2))
                {
                	printf("La multiplicacion entre los numeros ingresados es: %d \n", multiplicacion(primerNumero, segundoNumero));
                }
                else printf("Primero debe ingresar los numeros seleccionando las opciones 1 y 2 \n");
                break;
            case 7:
            	if (NumeroIngresado1  == true)
            	{
            		printf("El factorial del primer numero igresado es %lld \n", factorial(primerNumero));
            	}
            	else printf("Primero debe ingresar los numeros seleccionando las opciones 1 y 2 \n");
                break;
            case 8:
                if (verificarNumeros(NumeroIngresado1, NumeroIngresado2))
                {
                	printf("la suma los numeros ingresados  es :%d \n", suma(primerNumero, segundoNumero));
                	printf("la resta de los numeros ingresados es: %d \n", resta(primerNumero, segundoNumero));
                	printf("La division entre los numeros es: %f \n", division(primerNumero, segundoNumero));
                	printf("La multiplicacion entre los numeros ingresados es: %d \n", multiplicacion(primerNumero, segundoNumero));
                	printf("El factorial del primer numero igresado es %lld \n", factorial(primerNumero));
                }
                else printf("Primero debe ingresar los numeros seleccionando las opciones 1 y 2 \n");
            case 9:
                seguir = 'n';
                break;
        }
    }
    return 0;
}




#include <stdbool.h>
bool verificarNumeros ( bool ingreso1, bool ingreso2)
{
    if (ingreso1 && ingreso2)  return true;
    else return false;
}
int suma(int primerNumero, int segundoNumero)
{
    int Resultado = primerNumero + segundoNumero;
    return Resultado;
}

int resta(int primerNumero, int segundoNumero)
{
    int Resultado = primerNumero - segundoNumero;
    return Resultado;
}

int multiplicacion(int primerNumero, int segundoNumero)
{
    int Resultado;
    Resultado = primerNumero * segundoNumero;
    return Resultado;
}

float division(float primerNumero, float segundoNumero)
{
    float Resultado;
    Resultado = primerNumero / segundoNumero;
    return Resultado;
}

long long int factorial(int primerNumero)
{
    int contador;
    long long int Resultado;
    contador = primerNumero;
    Resultado = 1;
    while(contador >=1)
    {
        Resultado = Resultado * contador;
        contador--;
    }
    return  Resultado;
}



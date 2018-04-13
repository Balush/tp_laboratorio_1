#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdbool.h>

/** chequea que los numeros hayan sido ingresados por el usuario
 *
 * \param ingreso1
 * \param ingreso2
 * \return bool
 *
 */
bool verificarNumeros ( bool ingreso1, bool ingreso2);

/**
 * Suma dos enteros y retorna el resultado
 * \param primerNumero int
 * \param segundoNumero int
 * \return int
 */
int suma(int primerNumero,int segundoNumero );

/** resta dos enteros y entrega un resultado
 * \param primerNumero int
 * \param segundoNumero int
 * \return int
 */
int resta (int primerNumero,int segundoNumero);

/** retorna el factorial de un numero
 * \param primerNumero int
 * \return long long int
 *
 */
long long int factorial(int primerNumero);

/** multiplica dos int
 *
 * \param primerNumero int
 * \param segundoNumero int
 * \return int
 *
 */
int multiplicacion(int primerNumero, int segundoNumero);

/** divide dos int y valida que el segundo parametro no sea 0
 * \param primerNumero int
 * \param segundoNumero int
 * \return float
 */
float division (float primerNumero, float segundoNumero);


#endif // FUNCIONES_H_INCLUDED

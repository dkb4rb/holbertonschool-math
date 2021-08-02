#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * modulus - check the code for Holberton School students.
 *
 * Return: Always double.
 * @c: is a variable double of structur complex.
 */

double modulus(complex c)
{
	double sqr = 2.0;

	return (sqrt(pow(c.re, sqr) + pow(c.im, sqr)));
}

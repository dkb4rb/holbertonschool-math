#include "holberton.h"
#include <math.h>

/**
 * addition - Adding value numbers complex c1 + c2 in c3
 * @c1: first complex number
 * @c2: second complex number
 * @c3: sum of complex numbers
 * Return: void
 */

void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
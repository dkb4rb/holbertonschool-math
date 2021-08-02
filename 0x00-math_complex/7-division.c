#include "holberton.h"
#include <math.h>

/**
 * division - perform the division operation to complex numbers
 * @c1: first complex number
 * @c2: second complex number
 * @c3: quotient of complex numbers
 * Return: void
 */

void division(complex c1, complex c2, complex *c3)
{
    c3->re = ((c1.re * c2.re) + (c1.im * c2.im)) / (pow(c2.re, 2) + pow(c2.im, 2));
    c3->im = ((c1.im * c2.re) - (c1.re * c2.im)) / (pow(c2.re, 2) + pow(c2.im, 2));
}
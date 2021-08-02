#include "holberton.h"
#include <math.h>

/**
 * complex_from_mod_arg  - update the real and the imaginary parts of a complex number
 * @m: modulus
 * @arg: argument
 * @c3: complex number
 * Return: void
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
    c3->re = sqrt(pow(m, 2) / (1 + pow(tan(arg), 2)));
    c3->im = tan(arg) * sqrt(pow(m, 2) / (1 + pow(tan(arg), 2)));
}

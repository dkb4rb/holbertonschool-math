#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <math.h>
#include <stdio.h>
#define PI 3.14159265

/**
 * struct complex - is a struct that get two doubles.
 *
 * @re: Is a variable double. Is real part to the number complex.
 * @im: Is a variable double. Is imaginaty part to the number complex.
 */

typedef struct complex
{
	double re;
	double im;

} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);

#endif /* HOLBERTON_H*/
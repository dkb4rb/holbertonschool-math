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
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg(double m, double arg, complex *c3);

#endif /* HOLBERTON_H*/
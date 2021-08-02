#include <stdio.h>
#include <math.h>
#include "holberton.h"

/**
 * argument - conjuga
 * @c: struct
 * Return: arg
 **/

double argument(complex c)
{
	double arg;

	arg = atan(c.im / c.re);
	return (arg);
}
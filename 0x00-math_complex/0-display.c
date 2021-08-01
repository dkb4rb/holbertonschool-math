#include <stdio.h>
#include "holberton.h"

void display_complex_number(complex c)
{
	if (c.im == 0 && c.re == 0)
		return;
	else if (c.im == 0)
		printf("%g\n", c.re);
	else if (c.re == 0)
		printf("%g\n", c.im);
	else if (c.im == -1)
		printf("%g - i\n", c.re);
	else if (c.im == 1)
		printf("%g + i\n", c.re);
	else if (c.im < -1)
	{
		c.im = c.im * -1;
		printf("%g - %gi\n", c.re, c.im);
	}
	else
		printf("%g + %gi\n", c.re, c.im);
}
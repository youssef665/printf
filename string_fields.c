#include "main.h"

/**
 * get_precision - gets the precision from the
 * string format
 * @p: string format
 * @params: the sturct of parameters
 * @ap: argument pointer
 *
 * Return: pointer
 */

char *get_precision(char *p, params_t *params, va_list ap)
{
	int s = 0;

	if (*p != '.')
		return (p);
	p++;
	if (*p == '*')
	{
		s = va_arg(ap, int);
		p++;
	}
	else
	{
		while (_isdigit(*p))
			s = s * 10 + (*p++ - '0');
	}
	params->precision = s;

	return (p);
}

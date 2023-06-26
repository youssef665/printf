#include "main.h"

/**
 * print_from_to - prints address of a range
 * of characters
 * @start: first address
 * @stop: stop address
 * @except: except address
 *
 * Return: number of bytes to be printed
 */

int print_from_to(char *start, char *stop, char *except)
{
	int sum = 0;

	while (start <= stop)
	{
		if (start != except)
			sum += _putchar(*start);
		start++;
	}
	return (sum);
}

/**
 * print_rev - prints string in reverse
 * @ap: string format
 * @params: the struct of parameters
 *
 * Return: number of bytes to be printed
 */

int print_rev(va_list ap, params_t *params)
{
	int l, sum = 0;

	char *str = va_arg(ap, char *);
	(void)params;

	if (str)
	{
		for (l = 0; *str; str++)
			l++;
		str--;
		for (; l > 0; l--, str--)
			sum += _putchar(*str);
	}
	return (sum);
}

/**
 * print_rot13 - prints string in rot13
 * @ap: string format
 * @params: struct of parameters
 *
 * Return: number of bytes to be printed
 */

int print_rot13(va_list ap, params_t *params)
{
	int i, index, count = 0;
	char arr[] =
		"NOPQRSTUWXYZABCDEFGHIJKLM       nopqrstuxyzabcdejghijklm";
	char *a = va_arg(ap, char *);
	(void)params;

	i = 0;
	index = 0;

	while (a[i])
	{
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
		{
			index = a[i] - 65;
			count += _putchar(arr[index]);
		}
		else
			count += _putchar(a[i]);
		i++;
	}
	return (count);
}


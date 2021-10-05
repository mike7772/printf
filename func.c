#include "main.h"

/**
 * print_char - prints character
 * @list: list of parameters
 * Return: amount of characters printed
*/
int print_char(va_list list)
{
		_putchar(va_arg(list, int));
		return(1);
}

/**
 * print_string - prints a string
 * @list: list of parameters
 * Return: amount of characters printed
*/
int print_string(va_list list)
{
		int i;
		char *str;
		
		str = va_arg(list, char *);
		if (str == NULL)
				str = "(null)";
		for (i=0; str[i] != '\0'; i++)
		{
				_putchar(str[i]);
		}
		return(i);
}

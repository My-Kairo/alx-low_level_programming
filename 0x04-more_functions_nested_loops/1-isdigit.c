#include "main.h"
/**
 * _isdigit - checks for digit 0-9
 *
 * @c: character to determine
 *
 * Return: 1 if its a digit or else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}

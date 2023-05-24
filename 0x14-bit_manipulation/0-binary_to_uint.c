#include "main.h"

/**
 * binary_to_uint- converts a binary number to an unsigned integer
 * @b: points to a string of 0 and 1 characters.
 * Return: converted number.
 * NULL if string does not  contain 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, length;
	unsigned int Numconv = 0;

	for (length = 0; b[length] != '\0'; ++length);

	if (b == NULL)
		return (0);
	length--;
	while (length >= 0)
	{
		if (b[i]  == 48)
		{
			Numconv += (0 * (1 << length));
		}
		else if (b[i] == 49)
		{
			Numconv += (1 * (1 << length));
		}
		else
		return (0);
		length++;
		 i++;
	}
		return (Numconv);
}

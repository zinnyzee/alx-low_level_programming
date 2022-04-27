#include "main.h"

/**
* _strpbrk - prints buffer in hexa
* @s: buffer
* @accept: buffer2
*
* Return: Nothing.
*/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
										if (*s == accept[index])
				return (s);
		}

		s++;
								}

	return ('\0');
}

#include "main.h"

/**
* _strstr - first occurrence of the substring needle in the string haystack
* @haystack: main str to be examined
* @needle: searched in haystack
* Return: return 0
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
	while (needle[j] && (haystack[i] == needle[0]))
	{
		if (haystack[i + j] == needle[j])
			j++;
		else
			break;
								}
	if (needle[j])
	{
		i++;
		j = 0;
								}
	else
								return (haystack + i);					}
	return (0);
}

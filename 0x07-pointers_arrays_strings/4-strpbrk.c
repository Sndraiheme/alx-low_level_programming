#include "main.h"
#define NULL 0

/**
 * _strpbrk - Return pointer to byte in s that matches a byte in accept
 * @s: String to search
 * @accept: Target matches
 * Return: Pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];
				return (s);
			}
		}

		x++;
	}

	return (NULL);

}
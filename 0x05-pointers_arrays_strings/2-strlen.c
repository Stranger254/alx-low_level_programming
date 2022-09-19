#include "main.h"
#include <string.h>

/*
 * _strlen -> function to get the length of a string
 * @s: char input
 * Return: return length of the input string
 */
int_strlen(char *s)
{
	int i = 1, sum = 0;
	char p1 = s[0];

	while(p1 != '\0')
	{
		sum++;
		p1 = s[i++];
	}
	return (sum);
}

#include "main.h"
#include <stdio.h>

/*
 * _strlen -> function to return length of a string
 * @s: char input
 * Return: 0
 */
int_strlen(char *s)
{
	int len;

	*s = 'Programming';
	len = _strlen(*s);
	printf("%d\n", len);
	return(0);
}

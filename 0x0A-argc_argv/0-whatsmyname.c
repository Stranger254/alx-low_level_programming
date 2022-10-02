#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints its name
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	prinf("%s\n", argv[0]);
	return (0);
}

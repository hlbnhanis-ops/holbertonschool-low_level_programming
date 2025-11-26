/*
 * File: 4-print_rev.c
 * Auth: Anis Hamila
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int lastId = -1, i;

	while (s[lastId + 1] != '\0'){
		lastId++;
	}

	for (i = lastId; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}


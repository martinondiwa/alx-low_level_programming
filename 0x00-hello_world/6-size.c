/*
 * File: 6-size.c
 * Auth: Martin Sure
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h;
	long int p;
	long int t;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(p));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(t));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

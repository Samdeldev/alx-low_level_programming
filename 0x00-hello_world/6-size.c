#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alx_char = 'A';
	int alx_int = 3;
	long int alx_longI;
	long long int alx_long_longI;
	float alx_float = 2.4;

	printf("Size of a char: %d byte(s)\n", Sizeof(char));
	printf("Size of an int: %d byte(s)\n", Sizeof(int));
	printf("Size of a long int: %d byte(s)\n", Sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", Sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", Sizeof(float));
	return (0);
}

#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 * Decription: Only print one argument per line, ending with a new line
 * @argv: argument vector of pointers to strings
 * @argc: number of arguments passed to the function
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

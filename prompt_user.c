#include "main.h"

/**
 * main - Entry point of the program
 * @argc: counts the number of arguement
 * @argv: stores the strings
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{

	UNUSED(argc);
	UNUSED(argc);

	/* Checks if shell is in interactive mode */
	if (isatty(STDIN_FILENO) != 0)
	{
		write(STDOUT_FILENO, "MudettaShell$ ", sizeof(char) * 14);
	}
	return (0);
}

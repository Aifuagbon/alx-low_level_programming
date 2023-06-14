#include <stdio.h>

 /**
 * main - Prints all arguments receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{

printf("%s\n", argv[0]);
printf("%s\n", argv[1]);


return (0);
}

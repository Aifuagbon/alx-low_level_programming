#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 if the program executed successfully, 1 for error.
 */
int main(int argc, char *argv[])
{

int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (int i = 1; i < argc; i++)
{
for (int j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j])
{
printf("Error\n");
return (1);
}

int number = atoi(argv[i]);
sum += number;
}
printf("%d\n", sum);

return (0);
}

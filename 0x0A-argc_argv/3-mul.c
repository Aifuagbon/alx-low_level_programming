#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: The number of argument supplied to the program.
 * @argv: An array of pointers to the program.
 *
 * return: Always 0.
 */
int main(int argc, char *argv[]) {
 if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    int number1 = atoi(argv[1]);
g   int number2 = atoi(argv[2]);
    int outcome = number1 * number2;

    printf("%d\n", outcome);

  return 0;
}

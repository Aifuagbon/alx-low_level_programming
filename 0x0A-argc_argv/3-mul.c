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
	int num1 num2 product
    if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int product = num1 * num2;

    printf("%d\n", product);

    return 0;
}

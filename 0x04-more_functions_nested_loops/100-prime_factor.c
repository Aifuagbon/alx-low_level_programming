#include <stdio.h>

/**
 * main - print prime
 * Return: 0
 */

int main(void)
{
unsigned long int i = 3, n = 612852475143;
for (; i < 12057; i += 2)
{
while (n % i == 0 && n != i)
n /= i;
}
printf("%lu\n", n);
return (0);
}
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security


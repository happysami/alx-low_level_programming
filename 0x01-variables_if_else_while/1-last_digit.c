#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this function print randume number and comper the digits
 * Return: the return is 0
*/
int main(void)
{
	int n, digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit > 5)
{
printf(" Last digit of %d is %d and %d is greater than 5\n", n, digit, digit);
}
else if (n == 0)
{
printf("Last digit of %d is %d and %d is 0\n", n, digit, digit);
}
else
{
printf("Last digit of %d is %d and %d is\t"
"less than 6 and not 0\n", n, digit, digit);
}
return (0);
}

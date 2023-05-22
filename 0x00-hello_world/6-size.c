#include <stdio.h>
/**
 * main - main
 * Return: return
 */
int main(void)
{
int i;
char c;
float f;
long int l;
long long int a;
printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
printf("Size of a int: %lu.\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu.\n", (unsigned long)sizeof(f));
printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(l));
printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
return (0);
}

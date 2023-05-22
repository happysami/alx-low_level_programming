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
printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", sizeof(a));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}

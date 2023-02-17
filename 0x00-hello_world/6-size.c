#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
int integer;
long linteger;
long long llinteger;
float floatnumber;
printf("Size of a char: %zu byte(s)\n", sizeof(ch));
printf("Size of an int: %zu byte(s)\n", sizeof(integer));
printf("Size of a long int: %zu byte(s)\n", sizeof(linteger));
printf("Size of a long long int: %zu byte(s)\n", sizeof(llinteger));
printf("Size of a float: %zu byte(s)\n", sizeof(floatnumber));
return (0);
}

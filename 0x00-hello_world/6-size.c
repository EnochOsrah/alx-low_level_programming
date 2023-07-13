#include <stdio.h>
/**
 * main - Entry point
 * Description: prints "\"this function prints the size of various types
 * Return: Always 0 (Success)
 */
int main(void)
{
/*Description:"This function prints the size of various types."*/
printf("CHAR: %lu\n", sizeof(char));
printf("SHORT: %lu\n", sizeof(short));
printf("INT: %lu\n", sizeof(int));
printf("LONG: %lu\n", sizeof(long));
printf("LONG LONG: %lu\n", sizeof(long long));
printf("FLOAT: %lu\n", sizeof(float));
printf("DOUBLE: %lu\n", sizeof(double));
printf("LONG DOUBLE: %lu\n", sizeof(long double));
return (0);
}

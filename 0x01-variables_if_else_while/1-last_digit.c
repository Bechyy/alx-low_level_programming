#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print if the number is positive, zero, or negative
*
* Description: using the main function
* this program prints "programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int n;
int L;
char str[] = "Last digit of";
srand(time(0));
n = rand() - RAND_MAX / 2;
L = n % 10;
if (L > 5)
printf("%s %d is %d and is greater than 5\n", str, n, L);
else if (L == 0)
printf("%s %d is %d and is 0\n", str, n, L);
else if (L < 6)
printf("%s %d is %d and is less than 6 and not 0\", str , n, L);
return (0);
}

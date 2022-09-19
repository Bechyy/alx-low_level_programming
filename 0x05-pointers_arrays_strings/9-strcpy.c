#include "main.h"                                                                                                                  

/**                                                                                                                                

* _strcpy - prints n elements of an array of integers.                                                                             

* @dest: pointer to array                                                                                                          

* @src: number of array elements.                                                                                                  

*                                                                                                                                  

* Return: void.                                                                                                                    

*/                                                                                                                                 

char *_strcpy(char *dest, char *src)                                                                                               

{                                                                                                                                  

char *start = dest;                                                                                                                

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}

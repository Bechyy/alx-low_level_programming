#include "main.h"                                                                                                                   

                                                                                                                                    

/**                                                                                                                                 

                                                                                                                                    

* _abs - function that prints a absolute value of number                                                                            

                                                                                                                                    

* @n: takes in an integer                                                                                                           

                                                                                                                                    

* Return: 1if greater than 0, 0 if zero and -1 if less than 0                                                                       

                                                                                                                                    

*/                                                                                                                                  

                                                                                                                                    

int _abs(int n)                                                                                                                     

                                                                                                                                    

{
if (n < 0)
n = -n;
return (n);
}

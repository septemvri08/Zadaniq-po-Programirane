#include<stdio.h>
#define DEBUG(X) printf("\n The Value of " #X " is %d", X); printf("\n The file is: %s \n The line is: %d", __FILE__, __LINE__);
void main()
{
int number = 42;
DEBUG(number);
}

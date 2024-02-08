#include<stdio.h>
#define TROENOP(a, b) int c = a > b? a : b;
#define PRINT printf("\n %d", c);
void main()
{
TROENOP(700 , 101);
PRINT
}

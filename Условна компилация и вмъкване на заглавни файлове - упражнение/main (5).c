#include<stdio.h>
#define ARRAY_SIZE 7
void main()
{
    int i, j=1, k=1;


    #if defined ARRAY_SIZE && (ARRAY_SIZE < 10 && ARRAY_SIZE > 1)
    int array[ARRAY_SIZE];
    for(i=0;i<ARRAY_SIZE;i++)
    {
        array[i] = j;
        printf("\n Number %d: %d", i+1, array[i]);
        j=k*2;
        k=k*2;
    }
    #else
    printf("\n Ne e vuvedena duljina");
    #endif // ARRAY_SIZE
}

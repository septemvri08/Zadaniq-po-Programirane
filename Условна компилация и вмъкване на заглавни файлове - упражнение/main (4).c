#include<stdio.h>
#define DEBUG
int sort(int array[], int size)
{
    int i, j, temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    int sum = 0;
    for(i=0;i<size;i++)
    {
        if(i%3==0) sum = sum + array[i];
    }
    printf("\n sum = %d", sum);
}

void main()
{
    int array[] = {12, 5, 36, 60, 131, 10, 99};
    int size = 7;
    #ifdef DEBUG
     sort(array,size);
    #endif // DEBUG
}

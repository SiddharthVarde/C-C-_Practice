#include<stdio.h>

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5};
    int arr3[10];

    for(int i = 0; i < 10; i++)
    {
        if(i < 5)
        {
            arr3[i] = arr1[i];
        }
        else
        {
            int a = i - 5;
            arr3[i] = arr2[a];
        }
    }
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d of arr3 is %d\n",i,arr3[i]);
    }

    return 0;
}
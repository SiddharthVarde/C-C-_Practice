#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int arr1[] = {0,0,0,0,0};
    int *p;

    for(int i = 0; i < 5; i++)
    {
        p = &arr[i];
        arr1[i] = *p;
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d\tis\t%d\n",i,arr1[i]);
    }

    return 0;
}
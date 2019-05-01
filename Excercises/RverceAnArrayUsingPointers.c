#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int arr1[] = {0,0,0,0,0};
    int *p;
    int a = 0;

    for(int i = 4; i >= 0; i--)
    {
        p = &arr[i];
        arr1[a] = *p;
        a++;
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d\tis\t%d\n",i,arr1[i]);
    }

    return 0;
}
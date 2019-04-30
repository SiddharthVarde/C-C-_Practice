#include<stdio.h>

int main()
{
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter %d Element\n",i);
        scanf("%d",&arr[i]);
    }

    int arr1[10];
    for(int i = 0; i < 10; i++)
    {
        if(i < 5)
        {
            arr1[i] = arr[i];
        }
        else
        {
            arr1[i] = 0;
        }
        printf("%d  is  %d\n",i,arr1[i]);
    }

    return 0;
}
#include<stdio.h>

int main()
{
    int arr1[] = {5,6,7,80,9,80};

    for(int i = 0; i < 6; i++)
    {
        for(int a = i +1; a < 6; a++)
        {
            if(arr1[i] == arr1[a])
            {
                for(int b = a; b < 6; b++)
                {
                    arr1[b] = arr1[b + 1];
                }
            }
        }
    }
    for(int i = 0; i < 6; i++)
    {
        printf("%d  is  %d\n",i,arr1[i]);
    }

    return 0;
}
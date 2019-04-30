#include<stdio.h>

int main()
{
    int arr[] = {10,60,45,8,360};
    int b = 0,c = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int a = 0; a < 5; a++)
        {
            if(arr[a] > arr[i])
            {
                b = arr[a];
            }
            if(arr[a] > c  && arr[a] < b)
            {
                c = arr[a];
            }
        }
    }

    printf("%d",c);

    return 0;
}
#include<stdio.h>

int main()
{
    int arr[] = {1321,287,365,40,58};
    int *p;
    int x = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int a = i + 1; a < 5; a++)
        {
            if(arr[i] < arr[a])
            {
                x = arr[a];
                p = &x;
                arr[a] = arr[i];
                arr[i] = *p;
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d\tis\t%d\n",i,arr[i]);
    }

    return 0;
}
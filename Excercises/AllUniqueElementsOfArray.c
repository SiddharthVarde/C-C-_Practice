#include<stdio.h>

int main()
{
    int arr[] = {111,90,3,80,2,378,97,3,90};

    for(int i = 0; i < 9; i++)
    {
        for(int a = i -1; a >= 0; a--)
        {
            if(a > 0 && arr[a] == arr[i])
            {
                break;
            }
            else  if(a == 0)
            {
                printf("%d\n",arr[i]);
            }
        }
        if(i == 0)
        {
            printf("%d\n",arr[i]);
        }
    }
    
    return 0;
}
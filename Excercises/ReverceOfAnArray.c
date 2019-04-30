#include<stdio.h>

int main()
{
    int arr[] = {0,0,0,0,0};
    int rev[] = {0,0,0,0,0};

    for(int i = 0; i < 5; i++)
    {
        printf("enter member %d\n",i);
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < 5; i++)
    {
        int b = 5 - 1 - i;
        rev[i] = arr[b];
        printf("Arr %d is %d\n",i,arr[i]);
        printf("Rev %d is %d\n",i,rev[i]);
    }
    

    return 0;
}
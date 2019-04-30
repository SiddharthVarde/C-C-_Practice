#include<stdio.h>

int main()
{
    int arr[6];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter %d Element\n",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter number to incert\n");
    int a = 0;
    scanf("%d",&a);

    for(int i = 5; i >= 0; i--)
    {
        if(i > 0)
        {
            arr[i] = arr[i -1];
        }
        else if (i == 0)
        {
            arr[i] = a;
        }
    }
    for(int i = 0; i < 6; i++)
    {
        printf("%d  is  %d\n",i,arr[i]);
    }
    
    

    return 0;
}
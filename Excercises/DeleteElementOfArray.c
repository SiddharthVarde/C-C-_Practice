#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int a = 0;
    printf("Enter number of element to delete\n");
    scanf("%d",&a);

    for(int i = a - 1; i < 5; i++)
    {
        printf("%d = %d\n",arr[i],arr[i + 1]);
        arr[i] = arr[i + 1];
    }
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d \n",arr[i]);
    }
    
    return 0;
}
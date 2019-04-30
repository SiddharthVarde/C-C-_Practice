#include<stdio.h>

int main()
{
    int arr[] = {0,0,0,0,0};
    int odd[] = {0,0,0,0,0};
    int even[] = {0,0,0,0,0};
    for(int i = 0; i < 5 ; i++)
    {
        printf("Enter member number %d\n",i);
        scanf("%d",&arr[i]);
    }

    int oddNum = 0,evenNum = 0;
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[evenNum] = arr[i];
            evenNum++;
        }
        else
        {
            odd[oddNum] = arr[i];
            oddNum++;
        }
    }

    for(int i = 0; i < 5; i++)
    {
        printf("odd %d is %d\n",i,odd[i]);
        printf("even %d is %d\n",i,even[i]);
    }
    

    return 0;
}
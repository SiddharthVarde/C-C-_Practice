#include<stdio.h>

int main()
{
    int a = 0;
    printf("Enter the Year\n");
    scanf("%d",&a);

    if((a % 100 != 0) && (a % 4 == 0))
    {
        printf("Yes");
    }
    else if(a % 400 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    

    return 0;
}
#include<stdio.h>

int main()
{
    int a = 0;
    printf("Enter the number\n");
    scanf("%d",&a);
    if((a % 5 == 0) && (a % 11 == 0))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    

    return 0;
}
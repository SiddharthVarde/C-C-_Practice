#include<stdio.h>

int oddOrEven(int a)
{
    if(a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int a = 0;
    printf("Enter the Number\n");
    scanf("%d",&a);
    int b = oddOrEven(a);

    if(b == 1)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    

    return 0;
}
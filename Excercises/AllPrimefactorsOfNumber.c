#include<stdio.h>

int PrimeOrNot(int b)
{
    int c = 2;

    for(c= 2; c <= b; c++)
    {
        if(c < b && b % c == 0)
        {
            return 0;
        }
        else if(c == b)
        {
            return 1;
        }
    }
}

int main()
{
    printf("Enter the Number\n");
    int a = 0;
    int i = 2;
    scanf("%d",&a);

    for(i = 2; i <= a; i++)
    {
        if(i < a && a % i == 0 && PrimeOrNot(i) == 1)
        {
            printf("%d\n",i);
        }
        else if (i == a && PrimeOrNot(i) == 1)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
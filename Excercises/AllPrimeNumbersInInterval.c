#include<stdio.h>

int TakeStarting()
{
    int a = 0;
    printf("Enter the number to start From\n");
    scanf("%d",&a);
    return a;
}

int TakeEnding()
{
    int b = 0;
    printf("Enter the Number to End with\n");
    scanf("%d",&b);
    return b;
}

int main()
{
    int a = TakeStarting();
    int b = TakeEnding();

    while(a <= b)
    {
        for(int c = 2;c <= a; c++)
        {
            if(c < a  &&  a % c == 0)
            {
                break;
            }
            else if(c == a)
            {
                printf("%d  ",a);
            }
        }
        if(a == 1)
        {
            printf("%d  ",a);
        }
        a++;
    }
    
    return 0;
}
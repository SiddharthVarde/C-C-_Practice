#include<stdio.h>

int main()
{
    int a = 0;
    printf("Enter How many Units used\n");
    scanf("%d",&a);
    float b = 0;

    if(a <= 50)
    {
        b = 0.5 * a;
    }
    else if(a <= 150)
    {
        b = 0.75 * a;
    }
    else if(a <= 250)
    {
        b = 1.20 * a;
    }
    else
    {
        b = 1.5 * a;
    }
    
    b += b * 20 / 100;
    printf("The Amount is %f",b);

    return 0;
}
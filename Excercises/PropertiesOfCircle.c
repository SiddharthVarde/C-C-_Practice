#include<stdio.h>

float takeRadius()
{
    printf("Enter the radius of circle\n");
    float a = 0;
    scanf("%f",&a);
    return a;
}

void diamiter(float a)
{
    a = 2 * a;
    printf("%f\n",a);
}

void circumference(float a)
{
    a = 2 * 3.1415 * a;
    printf("%f\n",a);
}

void area(float a)
{
    float b = 2 * 3.1415 * (a * a);
    printf("%f",b);
}

int main()
{
    float b = takeRadius();
    diamiter(b);
    circumference(b);
    area(b);

    return 0;
}
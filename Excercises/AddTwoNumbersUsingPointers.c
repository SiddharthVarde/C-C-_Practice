#include<stdio.h>

int main()
{
    int a = 0;
    int b= 0;
    printf("Enter Two numbers Respectively\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int *p = &a;
    b += *p;
    printf("Sum is %d",b);

    return 0;
}
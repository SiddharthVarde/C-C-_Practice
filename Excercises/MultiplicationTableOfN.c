#include<stdio.h>

int main()
{
    int a = 0;
    printf("Type the Number for Table\n");
    scanf("%d",&a);
    int b = 1;
    int c = 0;

    while(b <= 10)
    {
        c = a * b;
        printf("%d  *  %d  =  %d\n",a,b,c);
        b++;
    }

    return 0;
}
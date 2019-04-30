#include<stdio.h>

int main()
{
    int a = -255;
    while (a <= 256)
    {
        printf("%c is %d\n",a,a);
        a++;
    }

    return 0;
}
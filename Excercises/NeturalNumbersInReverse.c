#include<stdio.h>

int main()
{
    int a = 0;
    printf("Enter The Value\n");
    scanf("%d",&a);
    int b = 0;
    while(a > b)
    {
        printf("%d ",a);
        a--;
    }

    return 0;
}
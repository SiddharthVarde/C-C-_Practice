#include<stdio.h>

int main()
{
    int a = 1,b = 1;
    int c = 0,terms = 2;

    printf("Enter The Number Greater Than 2\n");
    scanf("%d",&c);

    printf("%d %d ",a,b);
    while(terms < c)
    {
        if(terms % 2 != 0)
        {
            a = a + b;
            printf("%d ",a);
        }
        else
        {
            b = a + b;
            printf("%d ",b); 
        }
        
        terms++;
    }

    return 0;
}
#include<stdio.h>

int takeUserInput()
{
    int a = 0;
    printf("Enter Any Number\n");
    scanf("%d",&a);

    return a;
}

int main()
{
    int a = takeUserInput();
    int b = takeUserInput();

    if(a < b)
    {
        printf("Maximum is %d\n",b);
        printf("Minimum is %d\n",a);
    }
    else if (a > b)
    {
        printf("maximum is %d\n",a);
        printf("Minimum is %d\n",b);
    }
    else
    {
        printf("They are equal");
    }

    return 0;
}
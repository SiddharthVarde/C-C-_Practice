#include<stdio.h>

int main()
{
    printf("Enter Marks of Phisics , chemistry , biology , Maths , computer  Respectively\n");
    int a = 0;
    float b = 0;
    int c = 0;

    while(c < 5)
    {
        scanf("%d",&a);
        if(a >= 0  && a <= 100)
        {
            b += a;
            c++;
        }
        else
        {
            printf("Invalid Number\n");
            printf("Enter it again\n");
        }
    }

    b = b / 5;
    
    if(b < 40)
    {
        printf("Grade : F");
    }
    else if(b < 60)
    {
        printf("Grade : E");
    }
    else if(b < 70)
    {
        printf("Grade : D");
    }
    else if(b < 80)
    {
        printf("Grade : c");
    }
    else if(b < 90)
    {
        printf("Grade : b");
    }
    else
    {
        printf("Grade : a");
    }
    
    return 0 ;
}
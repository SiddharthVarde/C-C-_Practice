#include<stdio.h>

int ArmstrongOrNot(int b)
{
    if((b < 10) && (b * b * b) == b)
    {
        return 1;
    }
    else if((b >= 10)  &&  b < 100)
    {
        int arr[2];
        arr[1] = b % 10;
        int c = b - arr[1];
        arr[0] = c / 10;

        c = arr[0] * arr[0] * arr[0] + arr[1] * arr[1] * arr[1];
        if(c == b)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if(b >= 100 && b < 1000)
    {
        int arr[3];
        int c = b % 100;
        arr[2] = c % 10;
        c = c - arr[2];
        arr[1] = c / 10;
        c = b - (b %  100);
        arr[0] = c / 100;
        c = (arr[0] * arr[0] * arr[0]) + (arr[1] * arr[1] * arr[1]) + (arr[2] * arr[2] * arr[2]);

        if(c == b)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a = 0;
    int b = 1;
    char arr[3];

    printf("Enter Number between 0 And 1000\n");
    scanf("%d",&a);

    while(b <= a){
        if(ArmstrongOrNot(b) == 1)
        {
            printf("Here is Result\n");
            printf("%d\n",b);
        }
        b++;
    }

    return 0;
}
#include<stdio.h>

int IfPrime(int a)
{
    int b = 2;
    for(b = 2; b <= a; b++)
    {
        if((b < a) && a % b == 0)
        {
            return 0;
        }
        else if (b == a)
        {
            return 1;
        }
    }
    if(a == 1)
    {
        return 1;
    }
}

int IfArmstrong(int a)
{
    if((a < 10) && a * a * a == a)
    {
        return 1;
    }
    else if((a >= 10) && (a < 100))
    {
        int arr[2];
        int b = a % 10;
        arr[1] = b;
        arr[0] = (a - b) / 10;
        b = arr[0] * arr[0] * arr[0] + arr[1] * arr[1] * arr[1];
        if(b == a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if((a >= 100) && a < 1000)
    {
        int arr[3];
        int b = a % 100;
        arr[2] = b % 10;
        arr[1] = (b - arr[2]) / 10;
        arr[0] = (a - b) / 100;
        b = arr[0] * arr[0] * arr[0] + arr[1] * arr[1] * arr[1] + arr[2] * arr[2] * arr[2];
        if(b == a)
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
    printf("Enter Number between 1 to 1000\n");
    scanf("%d",&a);

    if(IfPrime(a) == 1)
    {
        printf("Number %d is Prime",a);
    }
    else if(IfArmstrong(a) == 1)
    {
        printf("Number is Armstrong Number");
    }
    else
    {
        printf("Number is Perfect Number");
    }

    return 0;
}
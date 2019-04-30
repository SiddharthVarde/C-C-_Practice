#include<stdio.h>

int main()
{
    char input = 'a';
    printf("Enter the Alphabet\n");
    scanf("%c",&input);

    if(input == 'a' || input == 'A' || input == 'e' || input == 'E' || input == 'i' || input == 'I'
    || input == 'o' || input == 'O' || input == 'u' || input == 'U')
    {
        printf("It is vowel");
    }
    else 
    {
        printf("it's Constant");
    }
    

    return 0;
}
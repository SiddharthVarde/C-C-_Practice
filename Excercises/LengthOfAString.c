#include<stdio.h>

int main()
{
    char *p;
    printf("Enter the String\n");
    scanf("%s",p);
    int i = 0;

    while(p[i] != '\0')
    {
        i++;
    }
    printf("%d",i);
    
    return 0;
}
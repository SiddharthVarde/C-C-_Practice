#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *a = (char *) calloc(10,sizeof(char) * 10);
    printf("Enter the String\n");
    scanf("%s",a);
    int i = 0;

    while(a[i] != '\0')
    {
        i++;
    }
    int end = i;

    char *b = (char *) calloc(10,sizeof(char) * 10);
    int st = 0;
    while(st < end)
    {
        b[st] = a[i - 1];
        i--;
        st++;
    }
    b[st] = '\0';

    for(int i = 0; i <= end; i++)
    {
        if(a[i] != b[i])
        {
            printf("String is not Palingdrome");
            break;
        }
        else if (i == end)
        {
            printf("String is Palingdrome");
        }
    }
    
    free(a);
    free(b);

    return 0;
}
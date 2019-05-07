#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *p = (char *)calloc(15,sizeof(char) * 15);
    printf("Enter the string\n");
    scanf("%[^\n]%*c",p);

    for(int i = 0; p[i] != '\0'; i++)
    {
        if(p[i] == ' ')
        {
            for(int a = i; p[a] != '\0'; a++)
            {
                p[a] = p[a + 1];
            }
            i--;
        }
        else
        {
            break;
        }
    }
    int i= 0;

    for(i = 0; p[i] != '\0'; i++)
    {

    }
    for(int a = i - 1; p[a] == ' '; a--)
    {
        p[a] = p[a + 1];
    }
    printf("After Removing all spaces\n");
    printf("%s",p);

    free(p);
    return 0;
}
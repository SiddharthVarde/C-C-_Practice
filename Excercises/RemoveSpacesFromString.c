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
    }
    
    printf("%s",p);
    free(p);
    return 0;
}
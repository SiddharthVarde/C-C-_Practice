#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *p = (char *)calloc(15,sizeof(char) * 15);
    scanf("%[^\n]%*c",p);
    int countOfWords = 1;

    for(int i = 0; p[i] != '\0'; i++)
    {
        if(p[i] == ' ' && p[i + 1] != ' ' && p[i + 1] != '\0')
        {
            countOfWords++;
        }
    }
    
    printf("%d",countOfWords);
    free(p);

    return 0;
}
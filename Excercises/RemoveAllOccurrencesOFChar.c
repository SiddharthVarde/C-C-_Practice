#include<stdlib.h>
#include<stdio.h>

int main()
{
    char c = 'a';
    printf("Enter charecter To Remove\n");
    scanf(" %c",&c);

    char *p = (char *)calloc(15,sizeof(char) * 15);
    printf("Enter String\n");
    scanf("%s",p);

    for(int i = 0; p[i] != '\0'; i++)
    {
        if (p[i] == c)
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
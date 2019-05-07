#include<stdlib.h>
#include<stdio.h>

int main()
{
    char *p = (char *)calloc(15,sizeof(char)*15);
    scanf("%s",p);
    for(int i = 0; p[i] != '\0'; i++)
    {
        if (p[i] >= 'a' && p[i] <= 'z') {
            int a = p[i] - 'a';
            p[i] = 'A' + a;
        }
        else if (p[i] >= 'A' && p[i] <= 'Z')
        {
            int a = p[i] - 'A';
            p[i] = 'a' + a;
        }
    }
    printf("%s",p);
    free(p);

    return 0;
}
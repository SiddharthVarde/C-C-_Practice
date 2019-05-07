#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *p = (char *)calloc(15 ,sizeof(char) * 15);
    scanf("%s",p);

    for(int i = 0; p[i] != '\0'; i++)
    {
        if(p[i] >= 'a' && p[i] <= 'z')
        {
            int a = p[i] - 'a';
            p[i] = 'A' + a;
        }
    }
    printf("%s",p);
    free(p);

    return 0;
}
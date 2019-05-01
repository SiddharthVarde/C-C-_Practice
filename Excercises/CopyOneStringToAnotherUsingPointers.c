#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *p2;
    printf("Enter The String\n");
    char *p = calloc(0,20);
    scanf("%s",p);
    int i = 0;

    for(i = 0; p[i] != '\0'; i++)
    {
    }
    
    char *p1 = calloc(0,20);
    int j = 0;
    for(j = 0; j < i; j++)
    {
        p2 = &p[j];
        p1[j] = *p2;
    }
    p1[j] = '\0';
    printf("oyur Entered\n%s",p1);

    free(p);
    free(p1);
    return 0;
}
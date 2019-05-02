#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *str = (char *) calloc(10,sizeof(char) * 10);
    char *str1 = (char *) calloc(10,sizeof(char)* 10);
    char *str2 = (char *) calloc(20,sizeof(char) * 20);

    printf("Enter String 1\n");
    scanf("%s" , str);
    printf("Enter String 2\n");
    scanf("%s",str1);
    int a = 0;
    while(str[a] != 0){
        a++;
    }
    int j = 0;
    while(str1[j] != 0){
        j++;
    }
    int i = 0;
    for(i = 0; i < a + j; i++)
    {
        if(i < a)
        {
            str2[i] = str[i];
        }
        else if (i <= (a + j) && i >= a)
        {
            str2[i] = str1[i - a];
        }
    }
    str2[i] = '\0';
    printf("%s",str2);

    free(str);
    free(str1);
    free(str2);

    return 0;
}
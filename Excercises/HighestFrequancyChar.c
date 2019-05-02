#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *str = (char *) calloc(15,sizeof(char) * 15);
    int hfreq = 0;
    scanf("%s",str);
    int a = 0;
    char print = str[0];
    while(str[a] != '\0'){
        a++;
    }
    for(int i = 0; i < a; i++)
    {
        int frq = 1;
        for(int b = i + 1; b < a; b++)
        {
            if(str[i] == str[b])
            {
                frq++;
                if(frq > hfreq)
                {
                    hfreq = frq;
                    print = str[i];
                }
            }
        }
    }
    printf("Highest Frequancy charecter is %c",print);

    return 0;
}
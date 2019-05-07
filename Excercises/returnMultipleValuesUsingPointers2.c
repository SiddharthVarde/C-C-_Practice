#include<stdio.h>
#include<stdlib.h>

struct data
{
    int a;
    char c;
    float f;
};

struct data* method()
{
    struct data d;
    printf("Enter Integer\n");
    scanf("%d",&d.a);
    printf("Enter Charecter\n");
    scanf(" %c",&d.c);
    printf("Enter Float\n");
    scanf("%f",&d.f);
    
    struct data *p = (struct data *)calloc(1,sizeof(d));
    p = &d;
    return p;
}

int main()
{
    struct data *p = method();
    struct data d = *p;
    printf("%d\t%c\t%f\n",d.a,d.c,d.f);
    
    free(p);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int* Method()
{
    int *p = (int *)calloc(2,sizeof(int) * 2);
    for(int i = 0; i < 2; i++)
    {
        printf("Enter Value %d\n",i);
        scanf("%d",(p + i * (sizeof(int))));
    }
    return p;
}

int main()
{
    int *a = Method();

    printf("%d\n",*a);
    printf("%d\n",*(a + 1 * sizeof(int)));
    free(a);

    return 0;
}
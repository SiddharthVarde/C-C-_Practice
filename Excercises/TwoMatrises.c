#include<stdio.h>

int main()
{
    int mat1[] = {1,2,3,4};
    int mat2[] = {0,9,5,19};
    int sum[4];

    for(int a = 0; a < 4;a++)
    {
        sum[a] = mat1[a]+mat2[a];
        printf("sum %d is %d\n",a ,sum[a]);
    }

    int subs[4];
    for(int i = 0; i < 4; i++)
    {
        subs[i] = mat1[i] - mat2[i];
        printf("subs %d is %d\n",i,subs[i]);
    }
    
    int mult[4];
    mult[0] = mat1[0] * mat2[0] + mat1[1] * mat2[2];
    mult[1] = mat1[0] * mat2[1] + mat1[1] * mat2[3];
    mult[2] = mat1[2] * mat2[0] + mat1[3] * mat2[2];
    mult[3] = mat1[2] * mat2[1] + mat1[3] * mat2[3];

    for(int i = 0; i < 4; i++)
    {
        printf("mult %d is %d\n",i,mult[i]);
    }
    

    return 0;
}
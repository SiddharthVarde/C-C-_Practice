# include<stdio.h>

int main()
{
    int arr[] = {21,5,-84,56,-5};
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d  is  %d\n",i,arr[i]);
        }
    }
    
    return 0;
}
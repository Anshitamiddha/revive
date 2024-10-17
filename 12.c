#include<stdio.h>
int main()
{
    int a[]={1,1,2,2,3,3,4},i;
    for(i=0;i<7;i++)
    {
        if(a[i]!=a[i+1])
        {
            printf("%d \n",a[i]);
        }
        
    }
    return 0;
}
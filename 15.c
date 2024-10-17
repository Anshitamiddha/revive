#include<stdio.h>
int main()
{
    int a[6]={3,5,6,1,2,4};
    int i,smallest;
    smallest=a[0];
    for(i=0;i<6;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    printf("Smallest is %d",smallest);
    return 0;
}
#include<stdio.h>
int main()
{
    int a[]={1,2,4,7,7,5};
    int largest,i,second_largest;
    a[0]=largest;
    for(i=0;i<=6;i++)
    {
        if(a[i]>largest)
        largest=a[i];

       
    }
    largest=a[i];
    printf("largest is %d",largest);

    for(i=0;i<6;i++)
    {
        second_largest=a[0];
        if(a[i]<largest )
        {
        second_largest=a[i];
        }
    }
    printf("Second largest is %d ",second_largest);
    return 0;
}
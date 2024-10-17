#include<stdio.h>
int main()
{
int a[5]={3,2,1,5,2};
int i,largest;
largest=a[0];
for(i=0;i<5;i++)
{
    if(largest<a[i])
    largest=a[i];
    
}
printf("LArgest is %d",largest);
return 0;
}
#include<stdio.h>
int main()
{
    int marks[10],i,sum=0,avg;
    for(i=0;i<=9;i++)
    {
       printf("Ente r marks ");
       scanf("%d",&marks[i]) ;
         sum+=marks[i];
    }
    printf("Sum i s %d",sum);
    avg=sum/10;
    printf("Avg is %d",avg);
    return 0;
}
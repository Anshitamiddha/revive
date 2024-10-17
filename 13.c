#include<stdio.h>
int main()
{
    int a[]={1,2,3,3,5,4,4,5},i;
    for(i=0;i<7;i++)
    {
        if(a[i]<=a[i+1])
       {
        printf("yes\n");

       }
       
       
      else

      {
        printf("No");
      }
    }
   
    return 0;
}
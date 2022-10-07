#include<stdio.h>
int main()
{
   int i,a,sum=0;
   printf("enter 10 intgers:");
    for(i=6;i>=0;i--)
    {
       scanf("%d",&a);
       sum=sum-a;
     }
 printf("%d",sum);
}

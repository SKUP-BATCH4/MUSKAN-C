#include<stdio.h>
int main()
{
    int n,x=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       x=x*i;
    }
   printf("%d",x);
}

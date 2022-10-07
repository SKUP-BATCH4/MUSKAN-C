#include<stdio.h>
int main()
{

int i,j,a[5][5];





for(i=0;i<5;i++)
{

   for(j=1;j<5;j++)
   {

       scanf("%d",&a[i][j]);
   }
}
for(i=0;i<5;i++)
{

   for(j=5;j<6;j++)
   {

       printf("%d",a[i][j]);
   }
}
}

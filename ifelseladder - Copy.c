#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the values of a b c:");
scanf("%d%d%d",&a,&b,&c);
if (a==b&&b==c&&c==a)
{
    printf("0");
}
if (a==b||b==c||c==a)
{
    printf("10");
}
else printf("0");
}

#include<stdio.h>
int lottery( a, b,c);
int main()
{
int a,b,c;
printf("enter the three number:");
scanf("%d%d%d",&a,&b,&c);
printf("%d",lottery(a,b,c));
}
int lottery( int a, int b,int c)

{if (a+b==10 || b+c==10||c+a==10)
{
    return 10;
    }
    else if (a+b==(10+(b+c))|| a+b==(10+(c+a)))
    {
        return 5;

    }
    else
    {
        return 0;
    }












}

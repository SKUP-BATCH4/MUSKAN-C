#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
printf("%d", sum(a,b,c));
}

 int sum(int a, int b,int c)
    {
if(a+b==10||b+c==10||c+a==10)
    return 10;
else if(a+b>=10&&(b+c&&a+c))
    return 5;
else if(a+b==10||(b+c&&a+c))
    return 0;
    }

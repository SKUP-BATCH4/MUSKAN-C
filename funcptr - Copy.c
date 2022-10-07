#include<stdio.h>
int sum(int ,int);
void main()
{
    int s=0;
    int (*p)(int,int)= sum;
    int a,b;
    scanf("%d%d",&a,&b);
s=(*p)(a,b);

    printf("%d",s);
}

int sum(int a, int b)
{
    return a+b;
}

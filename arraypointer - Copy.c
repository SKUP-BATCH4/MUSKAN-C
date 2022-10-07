#include<stdio.h>
int main()
{

    int a=3,b=5,c=6;
    int* p[3];
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    printf("%d\n%d\n%d\n%d\n%d\n%d",*p[0],*p[1],*p[2],p[0],p[1],p[2]);
}

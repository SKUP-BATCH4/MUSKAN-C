#include<stdio.h>
#include<stdbool.h>
bool X(int,int,int);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",X(a,b,c));
}
bool X(int a, int b, int c)
{
    int x=a-b;
    int y=b-c;
    int z=c-a;
    if(x==y||x==z||y==z)
    {
        return true;
    }
    else return false;
}

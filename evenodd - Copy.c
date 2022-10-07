#include<stdio.h>
int main()
{

    int n=3;
    printf("%d",fun(n));
}
int fun(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return 1+fun(n-1);
    }
}

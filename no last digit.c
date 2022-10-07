#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
last(n);
}
int last(int n)
{
    int last=n/10;
    printf("%d\n",last);
    return last;
}

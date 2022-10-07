#include<stdio.h>
int main()
{

    int n;
    printf("enter");
    scanf("%d",&n);
    if((n%3==0)&&(n%5==0))
    {
        printf("false");
    }
    else if((n%3==0)||(n%5==0))
    {
        printf("true");
    }
    else
    {
        printf("er");
    }
}

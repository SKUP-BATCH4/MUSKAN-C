#include<stdio.h>
int findarea(int l,int b)
{
    int area=(l*b)/2;
    return area;
}

int main()
{
    int a,c;
    printf("enter length:");
    scanf("%d",&a);
    printf("enter breadth:");
    scanf("%d",&c);
    int s=findarea(a,c);
    printf("Area:%d",s);
    return 0;
}

#include<stdio.h>
int findarea(int l,int b,int h)
{
    int area=l*b*h;
    return area;
}

int main()
{
    int a,c,d;
    printf("enter length:");
    scanf("%d",&a);
    printf("enter breadth:");
    scanf("%d",&c);
    printf("enter height:");
    scanf("%d",&d);
    int s=findarea(a,c,d);
    printf("Area:%d",s);
    return 0;
}

#include<stdio.h>
#define pi 3.14
float findarea(int r)
{
    float area= (r*r)*pi;
    return area;
}
float findcircum(int r)
{
    float circum = 2*pi*r;
    return circum;
}


int main()
{
    int a;
    printf("enter radius:");
    scanf("%d",&a);
    float s=findarea(a);
    printf("Area:%.1f\n",s);
    float t=findcircum(a);
    printf("Circum:%.1f",t);
    return 0;
}

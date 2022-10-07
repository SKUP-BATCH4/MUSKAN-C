#include<stdio.h>
#define pi 3.14
float findarea(float r)
{
    float area= (r*r)*pi;
    return area;
}
float findcircum(float r)
{
    float circum = 2*pi*r;
    return circum;
}


int main()
{
    float r;
    printf("enter radius:");
    scanf("%f",&r);
    float s=findarea(r);
    printf("Area:%.1f\n",s);
    float t=findcircum(r);
    printf("Circum:%.1f",t);
    return 0;
}

#include<stdio.h>
float area(float b, float h)
{
     float area;
   area=.5*b*h;
    return area;

}
int main()
{
    float b, h;
    area(b,h);
    scanf("%f%f",&b,&h);
printf("%f",area(b,h));
}



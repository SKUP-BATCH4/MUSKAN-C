#include<stdio.h>
float findsi(float p,float t,float r)
    {

        float si=p*t*r/100;
        return si;

    }  1
int  main()
{
    float u=findsi(10,20,30);
    float g=findsi(5,6,5);

     printf("%f\n",u);

#include<stdio.h>
float findsi(float p, float t, float r)
{
     float si;
    si=p*t*r/100;
    return si;

}
int main()
{
    findsi(33,33,3);
printf("%f",findsi(33,33,3));
}




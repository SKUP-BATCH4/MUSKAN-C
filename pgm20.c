#include<stdio.h>
int main(){
    int a;
printf("enter");
scanf("%d",&a);
last(a);
printf("%d",a);
int last(int a)
{
    return a/10;
}



#include<stdio.h>
int sum(int a,int b)
{
    return a+b;

}
int main()
{
    int s,a,b ;
    int (*p)(int,int)=sum;
   // printf("enter the int:");
    //scanf("%d%d",&a,&b);
    s=(*p)(5,1);
    printf("%d",s);
}

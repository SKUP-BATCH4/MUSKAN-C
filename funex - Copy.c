#include<stdio.h>
//nt fun(int ,int);
void main()
{
    int x=1124;
    fun(x);
    printf("%d\n",x);
}
int fun(int x)
{
    int i,z, rem ,sum=0,product=1;
    while (x>0)
    {
        rem=x%10;
        sum=sum+rem;
     product=product*rem;
       x=x/10;
    }
    if(sum==product)
    {
        printf("spy no");
    }
    else
    {
        printf("not");
    }

}


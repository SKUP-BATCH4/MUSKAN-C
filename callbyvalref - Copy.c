#include<stdio.h>
//int fun(int ,int)
void main()
{
    int x=20,y=10;
    fun1(x,y);
    fun2(&x,&y);
    printf("%d %d",x,y);
}
int fun1(int x, int y)
{
     printf("%d\n",x+y);
}
int fun2(int *x, int *y)
{
    printf("%d\n",(*x)*(*y));
}

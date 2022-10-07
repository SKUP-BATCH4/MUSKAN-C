#include<stdio.h>
int main()
{

    int a,b;
    char ch;
    scanf("%c",&ch);
    printf("enter the number a:\n");
    scanf("%d",&a);
    printf("enter the number b:\n");
    scanf("%d",&b);


    switch(ch)
    {
    case '+' : printf("%d",a+b);
    break;
    case '-': printf("sub:%d",a-b);
    break;
    case '*': printf("%d",a*b);
    break;
    case '/' : printf("%d",a/b);
    break;



}
}

#include<stdio.h>
int main()
{

    int marks;
    printf("enter the number:");
    scanf("%d",&marks);

    switch(marks)
    {
    case 0 ... 35: printf("fail");
    break;
case 36 ... 60: printf("pass");
           break;
           case 61 ... 85 : printf("first class");
           break;
           case 86 ... 100 : printf("distinction");
           break;
           default: printf("better luck next time");
           break;
    }
}

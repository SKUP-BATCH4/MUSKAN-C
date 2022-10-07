#include<stdio.h>

int main()
{
    char a,b,z;
    printf("enter the character a:");
    scanf("%c",&a);
    b=('a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z');
    z=(a=b)||(a!=b);
    printf("it is alphabet %c",z);
}

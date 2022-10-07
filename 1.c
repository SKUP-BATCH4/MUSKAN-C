#include<stdio.h>
int main()
{
    int i=0;
    char str[i];
    printf("enter the string:");
    gets(str);
    while(str[i]!=0)
    {
        i++;
    }
    printf("length:%d",i);
}

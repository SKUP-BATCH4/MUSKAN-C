#include<stdio.h>

int func(char a[])
{
    a[5]="hello";
}
int main()
{
 char s;
 s=func(a);
 printf("%s",s);

}

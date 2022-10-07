#include<stdio.h>
char f(int n)
{
    if(n%20==18||n%20==19)
    {
        return "true";

    }
    else
    {
        return "false";
    }


}

int main()
{
    int a;
    printf("enter:");
    scanf("%s",&a);
    char x=f(a);
    printf("%s",x);

}





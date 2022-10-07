#include<stdio.h>
int lottery(int a,int b,int c)
{
    int ab=a+b;
    int bc=b+c;
    int ac=a+c;
   if(ab==10||bc==10||ac==10)
        return 10;
   else if((bc==ab+10)||(ac==ab+10))
        return 5;
    else
         return 0;
}
int main()
{
   int a,b,c;
   printf("enter");
   scanf("%d %d %d",&a,&b,&c);
    int   s=lottery(a,b,c);
   printf("%d",s);
}




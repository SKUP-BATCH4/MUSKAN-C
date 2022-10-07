#include<stdio.h>
int main()
{
    int a=10;
    int* ptr=&a;
    int ** ptr1=&ptr;
    int ***ptr2=&ptr1;
     int ****ptr3=&ptr2;
    printf("%d\n%d\n%d\n%d\n%d",a,*ptr,**ptr1,***ptr2,****ptr3);
     printf("%x\n%x\n%x\n%x\n%x",a,ptr,ptr1,ptr2,ptr3);
}

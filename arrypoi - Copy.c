#include<stdio.h>
main()
{
    int i;
    int a[5];
    int * p[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        p[i]=&a[i];
        //printf("%d",*p[i]);
        //printf("\n");
        printf("%d\n",*p[i]);
    }
    for(i=0;i<5;i++)
    {
        //p[i]=&a[i];
        printf("%d\n",p[i]);
    }
}

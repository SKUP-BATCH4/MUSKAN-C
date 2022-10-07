#include<stdio.h>
main()
{
    int i,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<3;i++)
    {
        printf("the value:");
        scanf("%d",&a[i]);
    }
    if (a[0]==6||a[2]==6)
        printf("True");
    else
        printf("false");


}

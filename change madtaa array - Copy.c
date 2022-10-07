#include<stdio.h>
main()
{
    int i,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[3],b[3];
    for(i=0;i<3;i++)
    {
        printf("the value:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
    if(a[i]==2&&a[i+1]==3)
            {
                a[i+1]=0;
            }
    }
    for(i=0;i<3;i++)
    {
        printf("%d",a[i]);
    }
}

#include<stdio.h>
int main()
{

    int i, n ;
    char a[n];
    printf("enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter values:");
        scanf("\n%c",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%c\t",a[i]);
    }
}

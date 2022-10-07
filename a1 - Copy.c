#include<stdio.h>
#include<conio.h>

int minimum(int a[],int n, int i)
{
    static int min=0;;
    if(i<n)
    {
        if(a[min]>a[i])
        {
            min=i;
            minimum(a,n,++i);
        }
    }
    return min;

}

int maximum(int a[],int n, int i)
{
    static int max=0;;
    if(i<n)
    {
        if(a[max]<a[i])
        {
            max=i;
            maximum(a,n,++i);
        }
    }
    return max;

}

int main()
{
    int a[1000],i,n,sum;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("min is %d",a[(minimum(a,n,1))]);
     printf("\nmax is %d",a[(maximum(a,n,1))]);
}


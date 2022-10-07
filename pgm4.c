#include<stdio.h>
int main()
{
    int i,j,n=3,mid;
    int a[3][3];
    printf("enter");

    printf("enter %d*%d matrix",n,n);


    for(i=0;i<=3;i++)
    {

        for(j=0;j<=3;j++)
        {


            scanf("%d",&a[i][j]);

        }
    }
     printf("enter %d*%d matrix",n,n);
    for(i=0;i<=3;i++)
    {

        for(j=0;j<=3;j++)
        {


            printf("%d",a[i][j]);

        }
        printf("\n");
    }
    mid=n/2;
    printf("\n middle");
    for(i=0;i<=3;i++)
    {

        for(j=0;j<=3;j++)
        {
            if((i==mid)||(j==mid))

                  printf("%d",a[i][j]);
            else
                printf(" ");
        }
        printf("\n");

    }

}


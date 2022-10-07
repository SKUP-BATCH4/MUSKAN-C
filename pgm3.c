#include<stdio.h>
int main()
{

    int i,j;
    int a[2][3];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter");
            scanf("%d",&a[i][j]);
             printf("%d\n",a[i][j]);
        }
    }
}

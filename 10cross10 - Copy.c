#include<stdio.h>
int main()
{
    char i,j;
    char a[10][10];
char c='*';
    for(i=0;i<10;i++)
    {
     for(j=0;j<10;j++)
     {
         a[i][j]=c;

     }
    }

        for(i=0;i<10;i++)
        {
        scanf("\n%c",&a[i][9]);
    }

    for(i=0;i<10;i++)
    {
for(j=0;j<10;j++)
{
        printf("%c  ",a[i][j]);
    }
    printf("\n");
    }

}



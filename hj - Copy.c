#include<stdio.h>
void main()
{
    FILE*fp=NULL;

    fp=fopen("C:/Users/lenovo/brigosha/yoo.txt","r");
    if(fp==NULL)
        printf("error");
    else
        printf("no error");
}

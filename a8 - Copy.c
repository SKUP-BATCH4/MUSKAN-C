int *fun(int a[],int b[]);
void main()
{
    int *p;
    int a[10]={0,1,0,1,1,1}, b[10]={1,1,1,1,1,0};
    //p=fun(a,b);
    printf("%d\n",*p);
    if(a[0]==0)
    {
        printf("a message won");
    }
    else
    {
        printf("b message won");
    }
}


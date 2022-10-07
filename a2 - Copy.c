int main()
{
    int *ptr,*ptr1,i;
    ptr=(int *)calloc(5,sizeof(int));
    printf("enter array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<5;i++)

    //printf("%d",ptr[i]);

ptr1=(int*)realloc(ptr,(2,sizeof(int)));
/*for(i=5;i<7;i++)
    {
        scanf("%d",&ptr1[i]);
    }*/
    for(i=0;i<3;i++)
            printf("%d",ptr1[i]);
            free(ptr1);
            free(ptr);

}

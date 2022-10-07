#include<stdio.h>

int delete_Duplicate(int arr[],int num)
{

    int i,j=0;
    for(i=0;i<num-1;i++)
    {
        if (arr[i]!=arr[i+1])
        {
            arr[j++]=arr[i];
        }
    }
    arr[j++]=arr[num-1];
    return j;
}
int main()
{
    int i,temp,j;
    int arr[]={1,3,3,2,5,5,5};
    int num=sizeof(arr)/sizeof(arr[0]);
    num=delete_Duplicate(arr,num);
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Display the unique elements from the array");

    for(i=0;i<num;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}

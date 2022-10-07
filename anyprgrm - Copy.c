#include<stdio.h>
void main()
{
    float kiran,vikram,kumar;
    printf("enter the height of kiran kavya kumar");
    scanf("%f%f%f",&kiran,&vikram,&kumar);
    if (kiran>vikram)
    {
        if (vikram>kumar)
        {
            printf("avearge");
        }
        else printf("shortty",vikram<kumar);
    }
    else printf("equal");
}

#include<stdio.h>
#include<string.h>
struct car
{
    char ma[2];
    char br[2];
    char size[2];
    char type[1];
    char sec[1];
    char mod[1];
    char ass[2];
    char serial[3];

};
int main()
{
    struct car c;
    for(int i=0;i<1;i++)
    {
        scanf("%s",c.ma);
        scanf("%s",c.br);
        scanf("%s",c.size);
        scanf("%s",c.type);
        scanf("%s",c.sec);
        scanf("%s",c.mod);
        scanf("%s",c.ass);
        scanf("%s",c.serial);
    }

    for(int i=0;i<1;i++)
    {
//        printf("%s",c.ma);
//        printf("%s",c.br);
//        printf("%d",c.size);
//        printf("%s",c.type);
//        printf("%s",c.sec);
//        printf("%s",c.mod);
//        printf("%s",c.ass);
//        printf("%d",c.serial);
       printf("%s",strcat(c.ma,c.br));
       //printf("%s",c.br);
    }
}

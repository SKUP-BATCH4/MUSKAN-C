#include<stdio.h>
char printing(char *);
int main()
{
    char n[10];
    //printf("Enter the character :");
    //scanf("%s",n);
   char (*p)(char[50]) = printing;
   (*p)("bhavana");
}
char printing(char *n)
{
    printf("%s",n);
}

#include<stdio.h>
struct std{
int tm;
float cgpa;
char grade;
float sgpa;

};
void main()
{
    struct std s[4];
    for(int i=0;i<4;i++)
    {
         printf("total marks is:");
           scanf("%d",&s[i].tm);
           printf("cgpa is:");
             scanf("%f",&s[i].cgpa);
             printf("sgpa is:");
               scanf("%f",&s[i].sgpa);
               printf("grade is:");
             scanf("\n%c",&s[i].grade);
    }
     for(int i=0;i<5;i++)
    {
    printf("%d\n%f\n%c\n%f",s[0].tm,s[1].cgpa,s[2].grade,s[3].sgpa);
}
}


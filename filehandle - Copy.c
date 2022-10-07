#include<stdio.h>
void main()
{
    FILE*fp=NULL;
    fp=fopen("C:/Users/lenovo/brigosha/yoo.txt","r");


     char str[89];


     int i;
     for(i=0;i<4;i++)
     {
         fgets(str,5000,fp);

         printf("%s",str);
     }



    fclose(fp);

}

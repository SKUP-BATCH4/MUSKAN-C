#include<stdio.h>
void main()
{
    FILE*fp=NULL;
    fp=fopen("C:/Users/lenovo/brigosha/yoo.txt","r+a+w");


     char str[89];


     int i;
     while(!feof(fp))
     {
         fgets(str,5,fp);

         printf("%s",str);
     }



    fclose(fp);

}

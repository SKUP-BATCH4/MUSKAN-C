#include<stdio.h>
int main()

{
    FILE*fp,*fp1;
    char ch;
    fp=fopen("C:/Users/lenovo/brigosha/yoo.txt","r");
    fp1=fopen("C:/Users/lenovo/brigosha/ji.txt

































































































































































































               ","w");
    ch=getc(fp);
    while(ch!= EOF)
    {
        fputc(ch,fp1);


        ch=fgetc(fp);
    }
   fprintf(fp1,"%s",ch);

    fclose(fp);
    fclose(fp1);

}

#include<stdio.h>
void main()
{
    FILE*fp;
     char str='s';

    fp=fopen("C:/Users/lenovo/brigosha/yoo.txt","r");



    str=fgetc(fp);
    printf("%c",str);

   // float s=78.6;
    //int a=2;
    //printf("enter");
    //scanf("%d\n %d\n",&a,&b);
    //fprintf( fp,"%s\n",ch);
    //fprintf(fp,"%s",str);
      //fprintf(fp,"%.2f",s);
        //fprintf(fp,"%d",a);
          //fputs(ch,fp);
         // fputs(str,fp);

           fclose(fp);
   // fp=fopen("C:/Users/lenovo/brigosha/yoo.txt","w");
   // fclose(fp);
}

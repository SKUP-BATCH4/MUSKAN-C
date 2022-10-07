 #include<stdio.h>
 #include"extern.c"
 int display()
    {
        extern int a;
        a++;
        return a;

    }

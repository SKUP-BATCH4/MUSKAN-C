#include<stdio.h>
int main()
{
    int a=5;
    float b=5.5;
    char c='c';
    void *vp;
    vp=&a;
    printf("%d\n",*(int *)vp);
    vp=&b;
    printf("%.2f\n",*(float *)vp);
    vp=&c;
    printf("%c\n",*(char *)vp);
    //printf("%d\n%d\n%d",*(int *)vp,*(float *)vp,*(char *)vp);
}

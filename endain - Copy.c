#include<stdio.h>
int main()
{
    int value=0x0b1101110;
    int convert=0;
    printf("value before converting=0x%x\n",value);
    convert|=((0xff & value)<<24);
    convert|=(((0xff<<8)&value)<<8);
    convert|=(((0xff<<16)&value)>>8);
    convert|=(((0xff<<24)&value)>>24);

printf("value after converting=0x%x\n",convert);
}

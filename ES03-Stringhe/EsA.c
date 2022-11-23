#include <stdio.h>
void stringacopia(char *src, char *dst);
int main(int argc, char *argv[]) 
{
  char s[]="Ciao mondo.";
  char d[30];
  stringacopia(&s[0],d);
  
return 0;
}
void stringacopia(char *src, char *dst) {
    
    while(*src != 0)
    {
        *dst=*src;
        printf("*dst=%c, *src=%c \n", *dst, *src);
        src++; dst++;
    }
}

void stringacopia_old(char *src, char *dst) {
    int i=0;
    while(src[i++] != 0)
    {
        dst[i]=src[i];
        printf("dst[%d]=%c, src[%d]=%c \n", i, dst[i], i, src[i]);
    }
}


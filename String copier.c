#include<stdio.h>
#include<string.h>
 
 
void copy(char* dst, char* src){
    while(*src != '\0')
    {
        strcpy(dst, src);
        *src++;
        *dst++;
    }
    *dst = '\0';
}
int main()
{
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
  int len = strlen(srcString) + 1;
  char dstString[len];
  strcpy(dstString, srcString);
  printf("%s\n", dstString);
  printf("%s\n", srcString);
}


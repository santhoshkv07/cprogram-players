#include<stdio.h>
int main()
{
 char str[50];
 int i,a;
 clrscr();
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
 {
  a=i;
 }
 str[a+1]='.';
 str[a+2]='\0';
 printf("%s",str);
 return 0;
}

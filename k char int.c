#include <stdio.h>
int main()
{
 char s[10000],t;
 int i,c=0,l,l2;
 gets(s);
 scanf("%c",&t);
 for(i=0;s[i]!='\0';i++)
 {
     if(s[i]==t)
       {
          printf("%d",i+1);
          break;     
       }
 }
  return 0;
}
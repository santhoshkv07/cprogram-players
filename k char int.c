#include <stdio.h>
int main()
{
 char s[10000],t;
 int i,count=0,l,l2;
 gets(s);
 scanf("%c",&t);
 for(i=0;s[i]!='\0';i++)
 {
     if(s[i]==t)
       {
         count++;     
       }
 }
 printf("%d",count);
  return 0;
}

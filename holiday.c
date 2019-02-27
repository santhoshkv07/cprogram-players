#include <stdio.h>

int main()
{
   char s[20];
   scanf("%s",s);
   if(s[0]=="S" || s[0]=="s")
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
    return 0;
}

#include <stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int x,i;
   scanf("%s",a);
   x=strlen(a);
   for(i=0;i<x;i++)
   {
       if(a[i]>=65&&a[i]<=90)
       {
           a[i]=a[i]+32;
       }
       else if(a[i]>=97&&a[i]<=122)
       {
           a[i]=a[i]-32;
       }
   }
   printf("%s",a);
	return 0;
}

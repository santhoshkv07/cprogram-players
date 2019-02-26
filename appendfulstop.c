#include<stdio.h>
#include<string.h>
int main()
{
int count=0;
char x[100];
scanf("%s",&x[100]);
for(int i=0;i<strlen(x);i++)
{
if(x[i]=='/0')
{
count++;
}
}
if(count>0)
printf("%s.",x)
return 0;
}

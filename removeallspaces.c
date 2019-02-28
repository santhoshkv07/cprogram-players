#include <stdio.h>
#include<string.h>
int main()
{
	char n[10];
	int n,i;
	scanf("%[^\t\n]s",n);
	n=strlen(n);
	for(i=0;i<n;i++)
	{
	   if(n[i]!=' ')
	   {
	       printf("%c",n[i]);
	   }
	}
        return 0;
}

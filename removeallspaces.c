#include <stdio.h>
#include<string.h>
int main()
{
	char n[10];
	int n,j;
	scanf("%[^\t\n]s",n);
	n=strlen(n);
	for(j=0;j<n;j++)
	{
	   if(n[j]!=' ')
	   {
	       printf("%c",n[j]);
	   }
	}
        return 0;
}

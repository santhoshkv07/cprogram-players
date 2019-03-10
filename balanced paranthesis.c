#include <stdio.h>
int main() 
{
	char str[20];
	int i,count=0,c1=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='(')
		{
			count=count1+1;
		}
		else if(str[i]==')')
		{
			c1=c1+1;
		}
	}
	if(count1==c1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
#include <stdio.h>

int main() 
{
	int n,k,flag=0,temp;
	scanf("%d %d",&n,&k);
	temp=n;
	while(temp!=1)
	{
		if(temp%k!=0)
		{
			flag=1;
			break;
		}
		temp=temp/k;
	}
	if(flag==0)
	{
		printf("yes");
	}
	else if(flag==1)
	{
		printf("no");
	}
	return 0;
}

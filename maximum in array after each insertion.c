#include <stdio.h>
int main() 
{
    int a[10],k,i=0,x,n,j,max=0;
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++)
    {
	    scanf("%d",&a[i]);
	}
	j=0;
    while(j<x)
	{
	    scanf("%d",&k);
	    a[n]=k;
	    n++;
	   for(i=0;i<n;i++)
	    {
	        if(a[i]>=max)
	        {
	            max=a[i];
	        }
	    }
	    printf("%d ",max); 
	j++; 
	}
	return 0;
}
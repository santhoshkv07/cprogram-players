#include <stdio.h>
int main()
{
    int a,b,c,sum=0;
	  scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
	return 0;
}

#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    if(i%2==1)
    {
     if(n%i==0)
     {
       printf("%d\t",i);
     }
    }
  }
  return 0;
}

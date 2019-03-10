#include<stdio.h>
int main()
{
 int a,b,N,i,c=0;
 scanf("%d",&N);
 for(i=0;i<N;i++)
 {
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        c++;
    }
 }
 printf("%d",c);
 return 0;
}
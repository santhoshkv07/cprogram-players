#include <stdio.h>
int main()
{
 int N,a[100],i,j,c=0;
 scanf("%d",&N);
 for(i=0;i<N;i++)
 {
    scanf("%d",&a[i]);
 } 
 for(i=2;;i++)
 {
    c=0;
    for(j=0;j<N;j++)
    {
        
        if(i%a[j]==0)
        {
           c++;
        }     
    }
    if(c==N)
    {
    printf("%d",i);
    break;
    }
 }
    return 0;
}
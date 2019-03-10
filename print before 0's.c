#include <stdio.h>
int main()
{
    int a[100000],N,i,c;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[i]==0)
        {
            c=i;
        }
    }
    for(i=0;i<c;i++)
    {
        if(a[i]!=0)
        {
        printf("%d ",a[i]);
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
   int a[30][30],i,j,m,count=0;
   clrscr();
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
    for(j=0;j<m;j++)
    {
     scanf("%d",&a[i][j]);
    }
   }
   if(a[0][0]==1)
   {
    count++;
   }
   if(a[0][2]==1)
   {
    count++;
   }
   if(a[1][1]==1)
   {
    count++;
   }
   if(a[2][0]==1)
   {
    count++;
   }
   if(a[2][2]==1)
   {
    count++;
   }
   printf("%d",count);
   return 0;
}
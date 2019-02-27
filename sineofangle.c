#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
   int A;
   float res;
   scanf("%d",&A);
   res=sin(A*pi/180);
   printf("%0.1f",res);
   return 0;
}

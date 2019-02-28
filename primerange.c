#include<stdio.h>
int main()
{
  int l, r, i, flag=1,count=0;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &r);
    if(l==2)
     count++;
    for(i = 2; i <= r; ++i)
        {
            for(int j=2;j<i;j++)
            {
              if(i % j == 0)
              {
                flag = 0;
                break;
              }
            }
         if (flag == 1)
            count=count+1;
        }
    printf("%d ",count);
}

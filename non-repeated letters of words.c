#include <stdio.h>

int main()
{
 char S[100000];
 int i,j,c=0;
 gets(S);
 for(i=0;S[i]!='\0';i++)
 {
  c=0;
  for(j=i+1;S[j]!='\0';j++)
  {
        if(S[i]!='#'&&S[i]!='#')
        {
          if(S[i]==S[j])
          {
           c++;
           S[j]='#';
          }
        }
        if(c==0&&S[i]!='#')
        {
          printf("%c ",S[i]);
        }   
     }
  return 0;
}
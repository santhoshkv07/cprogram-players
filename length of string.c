#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100000
int count(char * str, char * str1);
int main()
{
    char str[MAX_SIZE];
    char str1[MAX_SIZE];
    int c;
    gets(str);
    gets(str1);
    c = count(str, str1);
    printf("%d",c);
    return 0;
}
int count(char * str, char * str1)
{
    int i, j, f, c;
    int l, l1;
   l = strlen(str);     
   l1 = strlen(str1);
    c = 0;
    for(i=0; i <= l-l1; i++)
   {
        f= 1;
        for(j=0; j<l1; j++)
        {
            if(str[i + j] != str1[j])
            {
                f = 0;
                break;
            }
        }
        if(f == 1)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}

#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[50];
	scanf("%s",str);
	strcat(str,"answer");
	printf("%s",str);
	return 0;
}
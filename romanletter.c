#include <stdio.h>
 
void predigit(char num1, char num2);
void postdigit(char c, int n);
 
char romanval[1000];
int i = 0;
int main()
{
    int j;
    long number;
 
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number <= 0)
    {
        printf("Invalid number");
        return 0;
    }
    while (number != 0 && number>20)
    {
        if (number >= 10)
        {
            if (number < (10 + 3 * 10))
            {
                postdigit('X', number / 10);
                number = number - (number / 10) * 10;
            }
            else
            {
                predigit('X','L');
                number = number - (50 - 10);
            }
        }
        else if (number >= 5)
        {
            if (number < (5 + 4 * 1))
            {
                postdigit('V', number / 5);
                number = number - (number / 5) * 5;
            }
            else
            {
                predigit('I', 'X');
                number = number - (10 - 1);
            }
        }
        else if (number >= 1)
        {
            if (number < 4)
            {
                postdigit('I', number / 1);
                number = number - (number / 1) * 1;
            }
            else
            {
                predigit('I', 'V');
                number = number - (5 - 1);
            }
        }
    }
    printf("Roman number is: ");
    for(j = 0; j < i; j++)
        printf("%c", romanval[j]);
    return 0;
}
 
void predigit(char num1, char num2)
{
    romanval[i++] = num1;
    romanval[i++] = num2;
}
 
void postdigit(char c, int n)
{
    int j;
    for (j = 0; j < n; j++)
        romanval[i++] = c;
}

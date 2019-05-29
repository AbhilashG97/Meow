#include <stdlib.h>
#include <stdio.h>

char units[][10] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
char tens[][10] = {"Ten", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
char hundreds[][20] = {"One-Hundred", "Two-Hundred", "Three-Hundred", "Four-Hundred", "Five-Hundred", "Six-Hundred",
                       "Seven-Hundred", "Eight-Hundred", "Nine-Hundred"};
char exceptions[][20] = {"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

int *get_digits(int number)
{
    int *digits = (int *)malloc(sizeof(int) * 3);
    int counter;
    counter = 2;
    while (number > 0)
    {
        a
            digits[counter] = number % 10;
        number = number / 10;
        counter--;
    }
    return digits;
}

void get_words(int digits[])
{
    printf("%d %d %d\n", digits[0], digits[1], digits[2]);

    if (digits[1] == 1)
    {
        printf("%s %s\n", hundreds[digits[0] - 1], exceptions[digits[2] - 1]);
    }
    else
    {
        printf("%s %s %s\n", hundreds[digits[0] - 1], tens[digits[1] - 1], units[digits[2] - 1]);
    }
}

int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d", &number);
    get_words(get_digits(number));
    return 0;
}
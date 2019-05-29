#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char input[], int size)
{
    char temp[size];
    int j = 0;
    for (int i = strlen(input); i > 0; i--)
    {
        printf("%c ", input[i]);
        temp[j] = input[i];
        j++;
    }
    printf("\n%s\n", temp);
    j = strlen(input) - 1;
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] != temp[j])
        {
            return 0;
        }
    }
    return 1;
}

char *front_swap(char input[])
{
    int size = strlen(input);
    char *result = {"\0"};
    int j = 0;

    for (int i = 1; i < strlen(input); i++)
    {
        result[j] = input[i];
        j++;
    }
    result[size - 1] = input[0];
    printf("%s", result);
    return result;
}

char *back_swap(char input[])
{
    int size = strlen(input);
    char *result = {"\0"};

    int j = 1;
    for (int i = 0; i < strlen(input) - 1; i++)
    {
        result[j] = input[i];
        j++;
    }
    result[0] = input[size - 1];
    printf("%s", result);
    return result;
}

int getResult(char input[])
{
    // back shifts
    int back_shifts = 0;
    for (int i = 0; i < strlen(input) - 1; i++)
    {
        char *result = {"\0"};
        result = back_swap(input);
        if (isPalindrome(result, strlen(result)))
        {
            return back_shifts;
        }
        back_shifts++;
    }

    // front shitfs
    int front_shifts = 0;
    for (int i = 0; i < strlen(input) - 1; i++)
    {
        char *result = {"\0"};
        result = front_swap(input);
        if (isPalindrome(result, strlen(input)))
        {
            return front_shifts;
        }
        front_shifts++;
    }
}

int main()
{
    int T = 0;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        char input[] = {"\0"};
        scanf("%s", &input);
        printf("%s\n", input);
        printf("%d", isPalindrome(input, strlen(input)));
        //printf("%d\n", getResult(input));
    }

    return 0;
}
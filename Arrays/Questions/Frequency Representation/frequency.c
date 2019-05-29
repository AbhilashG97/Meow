#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[] = {"\0"};
    scanf("%s", &input);
    int count = 1;

    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == input[i + 1])
        {
            count++;
        }
        else
        {
            printf("%c", input[i]);
            printf("%d", count);
            count = 1;
        }

        if (i == strlen(input))
        {
            printf("%c", input[i]);
            printf("%d", count);
        }
    }
    printf("\n");
    return 0;
}
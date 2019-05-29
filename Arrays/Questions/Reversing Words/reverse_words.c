#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse_words(char input[]) 
{
    char *temp = (char *)malloc(sizeof(char)*strlen(input));
    char *result = (char *)malloc(sizeof(char)*strlen(input));
    int string_length = strlen(input);

    for(int i=string_length-1; i>0; i--) 
    {
        if(input[i] == ' ') 
        { 
            for(int i=sizeof(temp), int j=0; i !='\0'; i++, j++) 
            {
                result[j] = temp[i];
            }

            printf("%s", result);
        }
        temp[i] = input[i];
    }
}

int main() 
{   
    int string_size = 1000;
    char *input = (char *)malloc(sizeof(char)*string_size);
    return 0;
}
// Write a program to input and print text using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int maxSize = 100; // Maximum size for the input text
    char* text = (char*)malloc(maxSize * sizeof(char));

    if (text == NULL) 
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter text (up to %d characters):\n", maxSize);
    fgets(text, maxSize, stdin);

    printf("Entered text: %s", text);

    free(text);

    return 0;
}






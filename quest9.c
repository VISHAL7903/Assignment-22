//Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    size_t size;
    int *dynamicArray;
    printf("Enter the size in bytes for dynamic allocation: ");
    scanf("%d", &size);
    dynamicArray = (int *)malloc(size);
    if (dynamicArray == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 0; 
    }
    printf("Memory allocation successful!\n");
    free(dynamicArray);
    return 0; 
}
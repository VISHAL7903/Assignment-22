// Write a program to demonstrate dangling pointers in C.


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof (int));
    *ptr=10;
    printf("Before free %d\n",*ptr);
    free(ptr);
    printf("After free %d\n",*ptr);
    return 0;
}
// 7. Write a program to demonstrate memory leak in C.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof (int));
    ptr==NULL;
    return 0;
}
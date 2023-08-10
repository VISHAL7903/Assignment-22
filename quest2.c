// Write a program to ask the user to input a number of data values he would like to enter then create an array dynamically to accommodate the data values. Now take the input from the user and display the average of data values.


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,c;
    int i=0,size=0,sum=0;
    printf("Enter the size of array");
    scanf("%d",&size);
    ptr=(int*)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation is Faild");
        return 0;
    }
    printf("\nThe entered %d value\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("Average is %d\n",sum/size);
    free(ptr);
    return 0;
}
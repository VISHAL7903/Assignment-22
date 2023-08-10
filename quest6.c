//Write a program in C to find the largest element using Dynamic Memory Allocation

#include<stdio.h>
#include<stdlib.h>
int main()
{
    
        int *ptr;
        int i=0,n=0,max=0;
        printf("Enter the number of element");
        scanf("%d",&n);
        ptr=(int*)malloc(n*sizeof(int));
        if(ptr==NULL)
                {
                printf("Memory allocation is Faild");
                return 0;
                }           
                printf("\nThe entered %d value\n",n);
                for(i=0;i<n;i++)
                {
                scanf("%d",ptr+i);
                }   
                for(i=0;i<n;i++)   
                if(max<*(ptr+i))
                   max=*(ptr+i);
                printf("Largest is %d\n",max);
                free(ptr);
    return 0;
     
}
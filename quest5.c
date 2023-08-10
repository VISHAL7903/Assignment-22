// Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation.


#include<stdio.h>
#include<stdlib.h>
int main()
{
    
        int *ptr;
        int i=0,n=0,sum=0;
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
                {   
                    sum=sum+*(ptr+i);
                }
                    printf("Sum is %d\n",sum);
                    free(ptr);
    return 0;
     
}
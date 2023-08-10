// Find out the maximum and minimum from an array using dynamic memory allocation in C

#include <stdio.h>
#include <stdlib.h>
int main()
{
    
        int *ptr;
        int max,min,n,i;
        printf("Enter the number of element");
        scanf("%d",&n);
        ptr=(int*)malloc(n*sizeof(int));
        if(ptr==NULL)
                {
                printf("Memory allocation is Faild");
                return 0;
                }           
                printf("\nEnter %d Element \n",n);
                for(i=0;i<n;i++)
                {
                scanf("%d",ptr+i);
                } 
                if (i == 0)
                {
                max = min = *(ptr+i);  
                }
                for(i=1;i<n;i++)
                {
                if (*(ptr+i) > max) 
                    {
                    max =*(ptr+i);
                    }
                if (*(ptr+i) < min) 
                    {
                        min = *(ptr+i);
                    }
                }
                printf("Maximum value: %d\n", max);
                printf("Minimum value: %d\n", min);

                    free(ptr);
    return 0;
     
}
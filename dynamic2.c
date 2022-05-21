#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int *ptr = NULL;

    printf("Enter the name of element : ");
    scanf("%d",&size);

    ptr = (int *)calloc(size , sizeof(int));   // step 1: allocation the memory
    if(ptr == NULL)
    {
        printf("unable to allocate memory\n");
    }
    else
    {
        printf("memory succesfully allocation\n");
    }
    // step 2: use the memory

    free(ptr);    // step 3: free the memory
    return 0;
    }
    
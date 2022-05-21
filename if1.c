#include<stdio.h>

int main()
{
    int Marks = 0;

    printf("enter your marks\n");
    scanf("%d",&Marks);

    printf("enter your marks : %d\n",Marks);


    if(Marks>=60)
    {
        printf("First class\n");
    }
    else
    {
        printf("Not a first class\n");

    }

    return 0;
}
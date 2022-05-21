#include<stdio.h>

int no = 21;       // Global variable

void Demo()         // function defination
{
     printf("Inside demo\n");
     //all the below 3 variable are local variable
     int i = 10;
     auto int j = 20;
     auto int k;
     printf("%d\n",k);

}

int main()
{
    int variable = 51;   // local variable
    printf("Inside main\n");
    Demo();    // function call

    return 0;

}

//auto storage class
// memory allocation in stack
// default value garbage
// scope local through out the function
// lifetime local thoughout the function

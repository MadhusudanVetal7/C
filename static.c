#include<stdio.h>

void Demo()
{
    auto int i = 10;
    static int j = 10;

    i = i + 1;              // i++;
    j = j + 1;              // j++;

    ptintf("Value of i : %d\n",i);
    printf("Value of J : %d\n",j);

}


int main()
{
    printf("inside main\n");

    Demo();
    Demo();
    Demo();
    Demo();


    return 0;

}
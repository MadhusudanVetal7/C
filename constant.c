#include<stdio.h>

extern int no;      //Declaration of variable

int main()
{
    printf("%d\n",no);



    return 0;

}

// gcc First.c second.c -o myexe
// ./myexe      For linux or macos
// myexe        for windows

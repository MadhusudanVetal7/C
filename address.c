#include<stdio.h>

int main()

{
    int no = 11;
    char ch ='A';
    printf("%d\n",no);//11
    printf("Value of ch : %c \n",ch); //A
    printf("Address of no is : %u\n",&no); //Address bhetnar
    printf("Address of ch is : %n\n",&ch);//address bhetnar
    printf("size of no is : %d\n",sizeof(no));// size bhetnar jo data type aahe tyachi
    printf("size of ch is : %d\n",sizeof(ch));// size bhetnar jo data type  aahe tyachi

    return 0;

}
// formate specifiers
/*
%d singned integer in desimal formate
%c charecter
%f float data
%u unsigned integer
%x hexadecimal data
%o Octal data
%p pointer representation
%lf double
%Lf long double
%s string

*/

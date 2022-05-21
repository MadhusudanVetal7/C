#include<stdio.h>

void Demo()
{
    auto int i = 11;
    register int j = 21;
}
int main()
{
    Demo();

    return 0;

}
// register storage class
// memory: CPU register
// Defualt Value: Garbage
// Scope: Local (Thoughout the function)
// Lifetime: Local (Throughout the function)


#include<stdio.h>

// Demo he function cha naw je tumhi pan deau shakta
// %d manje d for decimal
// \n manje new line jyane apan new line war display karato

void Demo()
{
    auto int A = 10;
    A++;                // ++ ne Value ekane increment hote
    printf("%d\n",A);

}

void Hello()
{
    static int A = 10;
    A++;                    // ++ ne value ekane increment hote
    printf("%d\n",A);
}

int main()
{
    Demo();     //Function call
    Demo();     //Function call

    Hello();
    Hello();

    return 0;

}
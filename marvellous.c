#include<stdio.h>

// Gharakhalach dukann
int Addition(int No1, int No2)          //Function Defination
{
    //Block chi surwat
    int Ans = 0;                        // Local variabal od Addition
    Ans = No1 + No2;                    // berij keli by ALU

    return Ans;                         // Jyane call kela value dya

}   // Block cha shevat

// Apala ghar
int main()
{
    // Block chi suruwat
    // Local variables of main
    int A = 10, B = 11, C = 0;

    // C manje rikami pishwi
    C = Addition(A,B);                  // Function call

    printf("%d",C);                     // Gharchyanna bolu sanga kay zala te



    return 0;                           // OS la kalawa ki sagla nit zala aahe

}       // Block cha shewat


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

unsigned long long factorial(unsigned int n);

int main() {
    unsigned int number;
    unsigned long long fact;

    printf("Pozitif bir Tam Sayı Giriniz: ");
    scanf("%u", &number);

    fact = factorial(number);

    printf("%u sayısının faktöriyeli = %llu\n", number, fact);

    return 0;
}

unsigned long long factorial(unsigned int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

#include <stdio.h>

void ft_div_mod(int a, int b, int *diviseur, int *mod);

int main(void)
{
    int a;
    int b;
    int diviseur;
    int mod;

    a = 7;
    b = 2;
    printf("a : %d et b : %d \n", a, b);
    ft_div_mod(a, b, &diviseur, &mod);
    printf("div : %d et mod : %d \n", diviseur, mod);
    return (0);
}
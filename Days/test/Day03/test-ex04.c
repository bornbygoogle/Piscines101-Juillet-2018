#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a;
    int b;

    a = 7;
    b = 2;
    printf("a : %d et b : %d \n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("div : %d et mod : %d \n", a, b);
    return (0);
}
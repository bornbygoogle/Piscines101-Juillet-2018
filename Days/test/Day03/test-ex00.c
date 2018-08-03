#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
    int nbr;
    ft_ft(&nbr);
    printf("Chiffre nbr : %d", nbr);
    return (0);
}
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *str;
	
	str = "StringAAfficher !\0";
    printf("Nombre de caractere : %d",ft_strlen(str));
    return (0);
}

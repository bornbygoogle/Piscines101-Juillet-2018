#include <stdio.h>

void ft_putstr(char *str);

int main(void)
{
    char *str;
	
	str = "StringAAfficher !\0";
    ft_putstr(str);
    return (0);
}

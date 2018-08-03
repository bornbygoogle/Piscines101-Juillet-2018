#include <stdio.h>

int    main(void)
{
    char **str_res;
    char *str;
    str = "ft_print  params usage : ./a.out tqesst1 test2 testsf3";
    int nombre;
    int i;
    
    nombre = nbrs_word(str);
    printf("%d\n",nombre);
    str_res = ft_split_whitespaces(str);
    //i = 0;
    while (*str_res)
    {
        printf("%s\n",*str_res);
        str_res++;
    }
    return (0);
}
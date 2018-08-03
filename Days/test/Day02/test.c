#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "../test/test-sources.h"
#include "../Day02/ex00/ft_print_alphabet.c"
#include "../Day02/ex01/ft_print_reverse_alphabet.c"
#include "../Day02/ex02/ft_print_numbers.c"
#include "../Day02/ex03/ft_is_negative.c"
#include "../Day02/ex04/ft_print_comb.c"



/* Main */
int main()
{
	time_t t;
	
	printf("Print ordre alphabet : \n");
	ft_print_alphabet();
	printf("\nPrint ordre reverse alphabet : \n");
	ft_print_reverse_alphabet();
	printf("\nPrint numbers : \n");
	ft_print_numbers();
	
	/* Intializes random number generator */
	srand((unsigned) time(&t));
	printf("\nPrint numbers if negative : ");
	int vartest = rand()%20-10;
	printf("%d\n", vartest);
	ft_is_negative(vartest);
	printf("\nPrint comb : \n");
	ft_print_comb();
	printf("\nPrint comb2 : \n");
	ft_print_comb2();
	return 0;
}

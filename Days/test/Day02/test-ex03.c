#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void	ft_is_negative(int n);

/* Main */
int main()
{
	time_t t;
	
	/* Intializes random number generator */
	srand((unsigned) time(&t));
	printf("\nPrint numbers if negative : ");
	int vartest = rand()%20-10;
	printf("%d\n", vartest);
	ft_is_negative(vartest);

	return 0;
}

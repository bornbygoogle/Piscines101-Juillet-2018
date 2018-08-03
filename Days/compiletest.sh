#!/bin/bash

#gcc -Wall -Wextra -Werror -o test/test test/test.c

# Day02
#test ex00
#gcc -Wextra -Wall -Werror Day02/ex00/ft_print_alphabet.c test/Day02/test-ex00.c test/Day02/ft_putchar.c -o test/test

#test ex01
#gcc -Wextra -Wall -Werror Day02/ex01/ft_print_reverse_alphabet.c test/Day02/test-ex01.c test/Day02/ft_putchar.c -o test/test

#test ex02
#gcc -Wextra -Wall -Werror Day02/ex02/ft_print_numbers.c test/Day02/test-ex02.c test/Day02/ft_putchar.c -o test/test

#test ex03
#gcc -Wextra -Wall -Werror Day02/ex03/ft_is_negative.c test/Day02/test-ex03.c test/Day02/ft_putchar.c -o test/test

#test ex04
#gcc -Wextra -Wall -Werror Day02/ex04/ft_print_comb.c test/Day02/test-ex04.c test/Day02/ft_putchar.c -o test/test

#test ex05
#gcc -Wextra -Wall -Werror Day02/ex05/ft_print_comb2.c test/Day02/test-ex05.c test/Day02/ft_putchar.c -o test/test

#test ex06
#gcc -Wextra -Wall -Werror Day02/ex06/ft_putnbr.c test/Day02/test-ex06.c test/Day02/ft_putchar.c -o test/test

#test ex07
#gcc -Wextra -Wall -Werror Day02/ex07/ft_print_combn.c test/Day02/test-ex07.c test/Day02/ft_putchar.c -o test/test

# Day03
#test ex00
#gcc -Wextra -Wall -Werror Day03/ex00/ft_ft.c test/Day03/test-ex00.c -o test/test

#test ex01
#gcc -Wextra -Wall -Werror Day03/ex01/ft_ultimate_ft.c test/Day03/test-ex01.c -o test/test

#test ex02
#gcc -Wextra -Wall -Werror Day03/ex02/ft_swap.c test/Day03/test-ex02.c -o test/test

#test ex03
#gcc -Wextra -Wall -Werror Day03/ex03/ft_div_mod.c test/Day03/test-ex03.c -o test/test

#test ex04
#gcc -Wextra -Wall -Werror Day03/ex04/ft_ultimate_div_mod.c test/Day03/test-ex04.c -o test/test

#test ex05
#gcc -Wextra -Wall -Werror Day03/ex05/ft_putstr.c test/Day03/test-ex05.c test/Day02/ft_putchar.c -o test/test

#test ex06
#gcc -Wextra -Wall -Werror Day03/ex06/ft_strlen.c test/Day03/test-ex06.c -o test/test

#test ex07
#gcc -Wextra -Wall -Werror Day03/ex07/ft_strrev.c test/Day03/test-ex07.c Day03/ex05/ft_putstr.c test/Day02/ft_putchar.c -o test/test

#test ex08
#gcc -Wextra -Wall -Werror Day03/ex08/ft_atoi.c test/Day03/test-ex08.c -o test/test

#test ex09
#gcc -Wextra -Wall -Werror Day03/ex09/ft_sort_integer_table.c test/Day03/test-ex09.c -o test/test

# Day04
#test ex00
#norminette -R CheckForbiddenSourceHeader Day04/ex00/ft_iterative_factorial.c && gcc -Wextra -Wall -Werror Day04/ex00/ft_iterative_factorial.c Day03/ex05/ft_putstr.c test/Day04/test-ex00.c test/Day02/ft_putchar.c -o test/test

#test ex01
#norminette -R CheckForbiddenSourceHeader Day04/ex01/ft_recursive_factorial.c && gcc -Wextra -Wall -Werror Day04/ex01/ft_recursive_factorial.c Day03/ex05/ft_putstr.c test/Day04/test-ex01.c test/Day02/ft_putchar.c -o test/test

#test ex02
#norminette -R CheckForbiddenSourceHeader Day04/ex02/ft_iterative_power.c && gcc -Wextra -Wall -Werror Day04/ex02/ft_iterative_power.c Day03/ex05/ft_putstr.c test/Day04/test-ex02.c test/Day02/ft_putchar.c -o test/test

#test ex03
#norminette -R CheckForbiddenSourceHeader Day04/ex03/ft_recursive_power.c && gcc -Wextra -Wall -Werror Day04/ex03/ft_recursive_power.c Day03/ex05/ft_putstr.c test/Day04/test-ex03.c test/Day02/ft_putchar.c -o test/test

#test ex04
#norminette -R CheckForbiddenSourceHeader Day04/ex04/ft_fibonacci.c && gcc -Wextra -Wall -Werror Day04/ex04/ft_fibonacci.c Day03/ex05/ft_putstr.c test/Day04/test-ex04.c test/Day02/ft_putchar.c -o test/test

#test ex05
#norminette -R CheckForbiddenSourceHeader Day04/ex05/ft_sqrt.c && gcc -Wextra -Wall -Werror Day04/ex05/ft_sqrt.c Day03/ex05/ft_putstr.c test/Day04/test-ex05.c test/Day02/ft_putchar.c -o test/test

#test ex06
#norminette -R CheckForbiddenSourceHeader Day04/ex06/ft_is_prime.c && gcc -Wextra -Wall -Werror Day04/ex06/ft_is_prime.c Day03/ex05/ft_putstr.c test/Day04/test-ex06.c test/Day02/ft_putchar.c -o test/test

#test ex07
#norminette -R CheckForbiddenSourceHeader Day04/ex07/ft_find_next_prime.c && gcc -Wextra -Wall -Werror Day04/ex07/ft_find_next_prime.c Day03/ex05/ft_putstr.c test/Day04/test-ex07.c test/Day02/ft_putchar.c -o test/test

#test ex08
#norminette -R CheckForbiddenSourceHeader Day04/ex08/ft_eight_queens_puzzle.c && gcc -Wextra -Wall -Werror Day04/ex08/ft_eight_queens_puzzle.c Day03/ex05/ft_putstr.c test/Day04/test-ex08.c test/Day02/ft_putchar.c -o test/test

#test ex09
#norminette -R CheckForbiddenSourceHeader Day04/ex08/ft_eight_queens_puzzle_2.c && gcc -Wextra -Wall -Werror Day04/ex08/ft_eight_queens_puzzle.c Day03/ex05/ft_putstr.c test/Day04/test-ex08.c test/Day02/ft_putchar.c -o test/test

#test sastantua
#norminette -R CheckForbiddenSourceHeader sastantua/sastantua.c && 
gcc -Wextra -Wall -Werror sastantua/sastantua.c Day03/ex05/ft_putstr.c test/sastantua/test_sastantua.c test/Day02/ft_putchar.c -o test/test

if [ -f test/test ]; then
	./test/test
else
	echo "Test not exist"
fi

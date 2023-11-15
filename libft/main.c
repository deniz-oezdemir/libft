#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("if y is alphanumeric 1: %d\n", ft_isalnum('y'));
	printf("if 5 is alphanumeric 1: %d\n", ft_isalnum(5));
	printf("if + is alphanumeric 1: %d\n", ft_isalnum('+'));
	printf("if y is alpha 1: %d\n", ft_isalpha('y'));
	printf("if y is numeric 1: %d\n", ft_isdigit('y'));
	printf("if 5 is numeric 1: %d\n", ft_isdigit('5'));
	printf("if 5 is numeric 1: %d\n", isdigit('5'));
	return (0);
}

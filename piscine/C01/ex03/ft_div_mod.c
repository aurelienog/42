#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	num1;
	int	num2;
	int	*div;
	int	*mod;

	div = &num1;
	mod = &num2;
	ft_div_mod(6, 2, div, mod);	
	printf("div: %d,\nmod: %d", *div, *mod);
	return (0);
}

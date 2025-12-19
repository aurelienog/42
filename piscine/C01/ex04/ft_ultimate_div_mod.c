#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a /= *b;
	*b = temp % *b;
}

int	main(void)
{
	int	*ptr;
	int	*ptr2;
	int	num;
	int	number;

	num = 6;
	number = 2;
	ptr = &num;
	ptr2 = &number;
	ft_ultimate_div_mod(ptr, ptr2);
	printf("div:%d,\nmod:%d", *ptr, *ptr2);
	return (0);
}

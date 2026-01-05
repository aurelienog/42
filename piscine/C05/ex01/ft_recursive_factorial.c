#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}

int	main(int argc, char **argv)
{
	int	number;

	if (argc > 1)
	{
		number = argv[1][0] - '0';
		printf("%d", ft_recursive_factorial(number));
	}
	return (0);
}

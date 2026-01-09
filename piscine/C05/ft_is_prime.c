#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	if (nb < 2)
		return (0);
	x = 2;
	while (x <= nb / x)
	{
		if (nb % x == 0)
			return (0);
	x++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_is_prime(7));
	return (0);
}

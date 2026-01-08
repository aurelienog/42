#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	x = 1;
	while (x <= nb / x)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(25));
	return (0);
}

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	number;
	char	digits[12];
	int	i;

	number = nb;
	if (number < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}
	if (number == 0)
	{
		write(1, "0", 1);
		return;
	}
	i = 0;
	while (number > 0)
	{
		digits[i++] = number % 10 + '0';
		number /= 10;
	}
	while (--i >= 0)
		write(1, &digits[i], 1);
}

int	main(void)
{
	int	num = -42;

	ft_putnbr(num);
	return (0);
}

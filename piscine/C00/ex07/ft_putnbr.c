#include <unistd.h>

void	ft_print_nbr(char *number, int length)
{
	int	i;

	i = length - 1;
	while (i >= 0)
	{
		write(1, &number[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	long	number;
	char	num[12];
	int	i;

	number = nb;
	if (number == 0)
	{
		write(1, "0", 1);
        	return;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}
	i = 0;
	while (number > 0)
	{
		num[i] = number % 10 + '0';
		i++;
		number /= 10;			
	}
	ft_print_nbr(num, i);
}

int	main(void)
{
	ft_putnbr(-4325210);
	return (0);
}

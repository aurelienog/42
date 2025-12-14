#include <unistd.h>

void	ft_print_comb(int num, int number)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = num / 10 + '0';
	b = num % 10 + '0';
	c = number / 10 + '0';
	d = number % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (num != 98)
		write(1, ", ", 2);
}

void	ft_get_comb(void)
{
	int	num;
	int	number;

	num = 0;
	number = 1;
	while (num < 98)
	{
		ft_print_comb(num, number);
		if (number == 99)
		{
			num++;
			number = num + 1;
		}
		else
			number++;
	}
	ft_print_comb(num, number);
}

int	main(void)
{
	ft_get_comb();
	return (0);
}

#include <unistd.h>

int	is_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' '
			|| str[i] > '~'
			|| str[i] == '+'
			|| str[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	is_unique(char c, char *str, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	base_len;
	int	num[33];
	long	number;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0' || !is_valid(base))
		return;
	while (base[i] != '\0')
	{
		if (!is_unique(base[i], base, i))
			return;
		i++;
	}
	base_len = i;
	if (nbr == 0)
	{
		write(1, base, 1);
		return;
	}
	number = nbr;
	if (number < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}
	i = 0;
	while (number > 0)
	{
		num[i] = number % base_len;
		number /= base_len;
		i++;
	}
	while (--i >= 0)
		write(1, &base[num[i]], 1);
}

int	main(void)
{
	char	*base = "0123456789ABCDEF";

	ft_putnbr_base(42, base);
	return (0);
}

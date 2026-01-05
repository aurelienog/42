#include <stdio.h>

int	belong_to_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	char_is_unique(char c, char *base, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (c == base[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str, char *base, int base_len)
{
	int	i;
	int	number;
	int	sign;
	int	position;

	number = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	position = belong_to_base(str[i], base);
	while (position != -1)
	{
		number = number * base_len + position;
		i++;
		position = belong_to_base(str[i], base);
	}
	return (number * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	i;

	if (base[0] == '\0'|| base[1] == '\0')
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
			|| !char_is_unique(base[i], base, i))
			return (0);
		i++;
	}
	base_len = i;
	return (ft_atoi(str, base, base_len));
}

int	main(int argc, char **argv)
{
	char	*ptr;
	char	*base = "0123456789ABCDEF";

	if (argc > 1)
	{
		ptr = argv[1];
		printf("%d", ft_atoi_base(ptr, base));
	}
	return (0);
}

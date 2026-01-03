#include <stdio.h>

int	ft_atoi(char *str)
{
	int	number;
	int	i;
	int	negative_count;

	i = 0;
	while (str[i] == ' ' || ( str[i] >= 9 && str[i] <= 13))
		i++;
	negative_count = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative_count++;
		i++;
	}
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = 10 * number + (str[i] - '0');
		i++;
	}
	if (negative_count % 2 != 0)
		number *= -1;
	return (number);
}

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc > 1)
	{
		ptr = argv[1];
		printf("%d", ft_atoi(ptr));
	}
	return (0);
}

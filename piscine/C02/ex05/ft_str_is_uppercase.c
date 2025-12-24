#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc > 1)
	{
		ptr = argv[1];
		printf("%d", ft_str_is_uppercase(ptr));
	}
	return (0);
}

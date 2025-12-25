#include <stdio.h>

int	ft_is_alphanumeric(char c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alphanumeric(str[i - 1]))
		{
			if (ft_is_uppercase(str[i]))
				str[i] += 32;
		}
		if (!(ft_is_alphanumeric(str[i - 1]))
			&& ft_is_lowercase(str[i]))
				str[i] -= 32;
			
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc > 1)
	{
		ptr = argv[1];
		printf("%s", ft_strcapitalize(ptr));
	}
	return (0);
}

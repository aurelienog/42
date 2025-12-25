#include <stdio.h>

int ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z' );
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_lowercase(str[i]))
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
		printf("%s", ft_strupcase(ptr));
	}
	return (0);
}

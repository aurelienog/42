#include <stdio.h>

int	is_equal(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
			if(is_equal(&str[i], to_find))
				return (&str[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*ptr;
	char	*ptr2;

	if (argc > 2)
	{
		ptr = argv[1];
		ptr2 = argv[2];
		printf("%s", ft_strstr(ptr, ptr2));
	}
	return (0);
}

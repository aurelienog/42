#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	char	*ptr;
	char	*ptr2;

	if (argc == 3)
	{
		ptr = argv[1];
		ptr2 = argv[2];
		printf("%d\n", ft_strcmp(ptr, ptr2));
	}
	return (0);
}

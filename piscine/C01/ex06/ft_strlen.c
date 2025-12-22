#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	main(void)
{
	printf("%d", ft_strlen("hello world"));
	return (0);
}

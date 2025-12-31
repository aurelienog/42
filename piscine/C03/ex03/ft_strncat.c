#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *start = dest;

	if (nb == 0)
		return (dest);
	while (*dest)
		dest++;
	while (nb-- > 0 && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (start);
}

int	main(int argc, char **argv)
{
        char    dest[20];
	char    *src;
	unsigned int	nb;
	int	i;

        if (argc > 3)
        {
		i = 0;
		while (argv[1][i])
		{
			dest[i] = argv[1][i];
			i++;
		}
		dest[i] = '\0';
		src = argv[2];
		nb = argv[3][0] - '0'; 
                printf("%s", ft_strncat(dest, src, nb));
        }
        return (0);
}  


#include <unistd.h>

void	ft_print_hex(unsigned char c)
{
	char	hex[2];
	char	*base;

	base = "0123456789abcdef";
	hex[0] = base[c / 16];
	hex[1] = base[c % 16];
	write(1, "\\", 1);
	write(1, hex, 2);
}

int	ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~')
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_printable((unsigned char)str[i]))
			write(1, &str[i], 1);
		else
		{
			ft_print_hex((unsigned char)str[i]);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc > 1)
	{
		ptr = argv[1];
		ft_putstr_non_printable(ptr);
	}
	return (0);
}

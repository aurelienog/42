#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
		write(1, ", ", 2);
}

void	ft_get_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = a + 1;
	c = b + 1;
	while (a <= '7')
	{
		ft_print_comb(a, b, c);
		if (c == '9')
		{
			if (b == '8')
			{
				a++;
				b = a + 1;
			}
			else
				b++;
			c = b + 1;
		}
		else
			c++;
	}
}

int	main(void)
{
	ft_get_comb();
	return (0);
}

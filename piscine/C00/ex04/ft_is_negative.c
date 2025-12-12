#include <unistd.h>

void	ft_is_negative(int number)
{
	if (number < 0)
		write(1, "N\n", 2);
	else
		write(1, "P\n", 2);
}

int	main(void)
{
	ft_is_negative(4);
	ft_is_negative(-4);
	return (0);
}

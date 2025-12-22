#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	k;

	i = 0;
	k = size;
	while(i < (size / 2))
	{
		ft_swap(&tab[i++], &tab[--k]);
	}
}

int	main(void)
{
	int	i = 0;
	int	tab[] = {1, 2, 3, 4, 5, 6, 7};

	ft_rev_int_tab(tab, 7);
	while(i < 7)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	if (size <= 1)
	return;
	i = 1;
	while(i < size)
	{
		if(tab[i] < tab[i - 1])
		{
			ft_swap(&tab[i], &tab[i - 1]);
			i = 1;
		}
	i++;
	}
}

int	main(void)
{
	int	i = 0;
	int	tab[] = {1,3,5,2,7,6,4};

	ft_sort_int_tab(tab, 7);
	while(i < 7)
	{
		printf("%d", tab[i]);	
	i++;
	}
	return (0);
}

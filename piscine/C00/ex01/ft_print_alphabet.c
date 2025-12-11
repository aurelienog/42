#include <unistd.h>

int	main(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
	return (0);
}


#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	int	div;

	div = n;
	while (div % 2 == 0)
		div = div / 2;
	if (div % 2 == 0)
		return (0);
	return (1);
}

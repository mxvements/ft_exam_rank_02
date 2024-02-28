
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	const int	oct_len = 8;
	int			i;
	unsigned int bit;
	char		bit_char;

	i = oct_len - 1;
	while (i >= 0)
	{
		bit = (octet >> i) & 1;
		bit_char = bit + '0';
		write(1, &bit_char, 1);
		i--;
	}
}

int	main(void)
{
	print_bits((unsigned char)4);
	return (0);
}

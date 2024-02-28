
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	const int	oct_len = 8;
	unsigned int	bit;
	unsigned char	bit_char;
	int				i;

	i = 0;
	bit_char = 0;
	while (i < oct_len)
	{
		bit = (octet >> i) & 1;
		bit_char = (bit_char << 1) | bit; 
	}
	return (bit_char);
}

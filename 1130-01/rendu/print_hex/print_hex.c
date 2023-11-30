#include <unistd.h>
#include <stdio.h>

/* print_hex
 * write a program that takes a positive (or zero) number exressed in base 10,
 * and displays it in base 16 (lowercase letters) followed by a newline
 * if the number of params is not 1, the program displays a newline
 */

int		atoi(char *s)
{
	size_t 	i;
	int		nbr;

	i = 0;
	nbr = 0;
	while (s[i] != '\0')
	{
		nbr *= 10;
		nbr += (unsigned int)s[i] - '0';
		i++;
	}
	return (nbr);
}

void	putnbr_base(int nb, char *base, int baselen)
{
	char	c;

	if (nb >= baselen)
	{
		putnbr_base((nb / baselen), base, baselen);
	}
	c = base[nb % baselen];
	write(1, &c, 1);
	return ;
}

int	main(int argc, char **argv)
{
	int		nbr;
	char	*base16 = "0123456789abcdef";
	int		baselen = 16;

	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		putnbr_base(nbr, base16, baselen);
	}
	write(1, "\n", 1);
	return (0);
}

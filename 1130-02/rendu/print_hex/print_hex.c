#include <unistd.h>

int ft_atoi(char *s)
{
	size_t 	i;
	int		nbr;

	i = 0;
	nbr = 0;
	while (s[i] != '\0')
	{
		nbr *= 10;
		nbr += s[i] - '0';
		i++;
	}
	return (nbr);
}

void ft_putnbr_base(int nb, char *base, int baselen)
{
	char	c;

	if ((nb / baselen) != 0)
		ft_putnbr_base((nb / baselen),  base, baselen);
	c = base[nb % baselen];
	write(1, &c, 1);
	return ;
}

int	main(int argc, char **argv)
{
	int		nb;
	char	*base16 = "0123456789abcdef";

	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		ft_putnbr_base(nb, base16, 16);
	}
	write(1, "\n", 1);
	return (0);
}

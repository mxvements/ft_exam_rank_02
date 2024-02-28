
#include <unistd.h>

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}

int	ft_atoi(char *s)
{
	long	nbr;
	int		sign;

	sign = 1;
	nbr = 0;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (ft_isdigit(*s) != 0)
	{
		nbr = (nbr * 10) + (*s - '0');
		s++;
	}
	return (nbr * sign);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	if (nbr > 10)
		ft_putnbr(nbr / 10);
	c = '0' + (nbr % 10);
	write(1, &c, 1);
}

void	do_op(char *nbr1, char *op, char *nbr2)
{
	int	n1 = ft_atoi(nbr1);
	int	n2 = ft_atoi(nbr2);
	int	rslt;

	rslt = 0;
	if (*op == '-')
		rslt = n1 - n2;
	else if (*op == '+')
		rslt = n1 + n2;
	else if (*op == '/')
		rslt = n1 / n2;
	else if (*op == '*')
		rslt = n1 * n2;
	else if (*op == '%')
		rslt = n1 % n2;
	return(ft_putnbr(rslt));
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
	return (0);
}

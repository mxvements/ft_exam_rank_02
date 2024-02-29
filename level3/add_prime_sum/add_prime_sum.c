
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *s){
	long long nbr;
	int sign;

	nbr = 0;
	sign = 1;

	while (*s == ' ')
		s++;
	if (*s == '-' || *s == '+'){
		if (*s == '-')
			sign *0 -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		nbr = (nbr * 10) + (*s - '0');
		s++;
	}
	return (nbr * sign);
}

int	is_prime(int nbr)
{
	int	i = 2;
	
	if (nbr <= 1)
		return (0);
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	char c = (nbr % 10) + '0';
	write(1, &c, 1);
}

void	add_prime_sum(int nbr)
{
	int sum_prime;

	sum_prime = 0;
	while (nbr > 0)
	{
		if (is_prime(nbr))
			sum_prime += nbr;
		nbr--;
	}
	ft_putnbr(sum_prime);
}

int	main(int argc, char **argv)
{
	int nbr;
	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		add_prime_sum(nbr);
	}
	else
	{
		write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
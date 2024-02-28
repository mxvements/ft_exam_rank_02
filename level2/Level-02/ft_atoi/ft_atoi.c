
int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\t' || c == '\v' || c == '\n' || c == '\r')
		return (c);
	return (0);
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	nbr;

	sign = 1;
	while (ft_isspace(*str) != 0)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sing = -1;
		str++;
	}
	while (ft_isdigit(*str) != 0)
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return (sing * nbr);
}


#include <stdio.h>
#include <unistd.h>

int	get_digit(int c, int base_len)
{
	int max_digit;

	if (base_len <= 10)
		max_digit = base_len + '0'; //comaparo con char
	else
		max_digit = base_len - 10 + 'a';

	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0'); //devuelvo el numero
	else if( c >= 'a' && c <= 'f' && c <= max_digit)
		return (c - 'a' + 10);
	else
		return (-1);
}


int	ft_atoi_base(const char *str, int str_base)
{
	int rslt = 0;
	int sign = 1;
	int	digit;

	while (*str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str != '\0')
	{
		digit = get_digit(*str, str_base);
		if (digit == -1)
			break;
		rslt = rslt * str_base;
		rslt += digit;
		str++;
	}
	return (rslt * sign);
}


// COMMENT MAIN, input tests here
int	main(void)
{
	int nbr1 = ft_atoi_base("4a5c6f", 16);
	printf("nbr1: %d\n", nbr1);
	int nbr2 = ft_atoi_base("0101", 2);
	printf("nbr2: %d\n", nbr2);
	int nbr3 = ft_atoi_base ("-12", 10);
	printf("nbr3: %d\n", nbr3);

	return (0);
}
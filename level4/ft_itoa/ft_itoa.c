#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	count_digits(long long nbr)
{
	int len=0;

	if (nbr <= 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char *s;
	long long n = nbr;
	int digit_count = count_digits(n);

	s = (char *)malloc(sizeof(char) * (digit_count + 1));
	if (!s)
		return (NULL);
	s[digit_count] = '\0';

	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}

	while (n)
	{
		s[--digit_count] = (n % 10) + '0';
		n /= 10;
	}

	return (s);
}

//COMMENT MAIN just for test

int	main(void)
{
	char *s = ft_itoa(-2147483648);
	printf("%s\n", s);

	s = ft_itoa(2147483647);
	printf("%s\n", s);

	s = ft_itoa(0);
	printf("%s\n", s);

	s = ft_itoa(1256);
	printf("%s\n", s);

	return (0);
}
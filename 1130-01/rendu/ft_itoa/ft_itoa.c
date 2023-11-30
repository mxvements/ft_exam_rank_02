#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* ft_itoa
 * write a function that takes an int and converts it a to a null-termmianted string.
 * the function returns the result in a char array that you must allocate.
 */

size_t	countdigits(int nbr)
{
	size_t len;

	len = 0;
	if (nbr == 0)
		return (1);
	while ((nbr % 10) != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char		*s;
	size_t		len = countdigits(nbr);
	long long	nbl;
	int			i;		

	if (nbr < 0)
	{
		len++;
		nbl = (long long)nbr;
		nbl *= -1;
	}
	if (nbr >= 0)
		nbl = (long long)nbr;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	i = len;
	s[i--] = '\0';
	while (nbl % 10 != 0 && i >= 0)
	{
		s[i] = (nbl % 10) + '0';
		nbl /= 10;
		i--;
	}
	if (nbr < 0)
		s[0] = '-';
	if (nbr == 0)
		s[0] = '0';
	return (s);
}
/*
int	main(void)
{
	int minint = -2147483648;
	int	zero = 0;

	printf("%s\n", ft_itoa(minint));
	printf("%s\n", ft_itoa(zero));

	return (0);
}*/

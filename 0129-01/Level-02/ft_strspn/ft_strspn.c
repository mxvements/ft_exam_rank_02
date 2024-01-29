

int	ft_strchri(char *s, char c)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	/*	strspn
	 *	span a string
	 *	
	 *	spans the initial part of the null terminated string 's' as long as the chars
	 *	from 's' occur in the null terminated str 'charset'.
	 *	it computes the string array idx of the 1st char of 's' which is not in 'charset'
	 *	elese the idx of the first null character
	 * */
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchri(accpet, s[i]) == 0)
			return ((size_t)i);
		i++;
	}
	return (0);
}

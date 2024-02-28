

static int	ft_strchri(char *s, char c)
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

size_t	ft_strcspn(const char *s, const char *reject)
{
	/*	span a string
	 *	spans the initial part of the null-terminated string 's' as long as the characters
	 *	from 's' occur int he null-terminated string 'charset'. In other words, it computes
	 *	the string array index of the first character of 's' which is not in 'charset', else
	 *	the index of the first null character
	 * */
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchri(reject, s) != 0)
			return (i);
		i++;
	}
	return (i);
}

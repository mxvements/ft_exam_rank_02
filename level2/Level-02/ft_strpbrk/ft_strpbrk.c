
int	ft_strchri(char *s, char c)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++:
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	/*	strpbrk
	 *	locate multiple characters in string
	 *
	 *	locates in 's1' the first occurrence of any character in 's2' and returns
	 *	a pointer to this character
	 * */
	int	i;
	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchri(s2, s1[i]) != 0)
			return (s1 + i);
		i++:
	}
	return (NULL);
}

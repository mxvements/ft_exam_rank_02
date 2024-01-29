

int	ft_strlen(char *s)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char		*rev;
	const int	strlen = ft_strlen(str);
	int			i;

	rev = (char *)malloc(sizeof(char) * (strlen + 1));
	if (!rev)
		return (NULL);
	i = 0;
	rev[strlen] = '\0';
	while (rev[i] != '\0')
	{
		rev[i] = str[strlen - 1 - i]
		i++;
	}
	return (rev);
}

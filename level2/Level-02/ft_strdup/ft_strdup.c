
size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char			*rslt;
	const size_t	src_len = ft_strlen(src);
	int				i;

	rslt = (char *)malloc(sizeof(char) * (src_len + 1));
	if (!rslt)
		return (NULL);
	rslt[src_len] = '\0';
	i = 0;
	while (i < src_len)
	{
		rslt[i] = src[i];
		i++;
	}
	return (rslt);
}

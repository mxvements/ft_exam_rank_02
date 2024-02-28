
#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_strchri(char c, char *s)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

void	wdmatch(char *s1, char *s2)
{
	int			i;
	int			j;
	int			tmp_j;
	int			flag;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		flag = 0;
		tmp_j = ft_strchri(s1[i], (s2 + j));
		if (tmp_j != -1)
		{
			j += tmp_j;
			flag = 1;
		}
		i++;
	}
	if (s1[i] == '\0' && flag == 1)
		write(1, s1, ft_strlen(s1));
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

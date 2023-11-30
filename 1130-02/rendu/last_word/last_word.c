#include <unistd.h>
#include <stdio.h>


size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_last_word(char *s)
{
	int const 	len = ft_strlen(s);
	int			i;
	int			i_start;
	int			i_end;

	if (len == 0)
		return ;
	i = len;
	i_end = i--;
	while (i >= 0 && (s[i] == ' '))
	{
		i_end = i;
		i--;
	}
	i_start = i;
	while (i >= 0 && s[i] != ' ')
	{
		i_start = i;
		i--;
	}
	i = 0;
	while ((i_start + i) < i_end)
	{
		write(1, &s[i_start + i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_last_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
/*
int	main(void)
{
	char	*s;

	s = "     PONY    ";
	ft_last_word(s);
	write(1, "\n", 1);
	return (0);
}*/

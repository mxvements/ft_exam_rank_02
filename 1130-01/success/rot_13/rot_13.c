#include <stdio.h>
#include <unistd.h>

char	ft_rot_13(char c)
{
	if (c >= 65 && c <= 90)
	{
		if (c > 77)
			return (c - 13);
		else
			return (c + 13);
	}
	if (c >= 97 && c <= 122)
	{
		if (c > 109)
			return (c - 13);
		else
			return (c + 13);
	}
	return (c);
}

void	ft_rot_13_str(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = ft_rot_13(s[i]);
		i++;
	}
	return ;
}

void	ft_putstr(char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		write(1, &s[i++], 1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rot_13_str(argv[1]);
		ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

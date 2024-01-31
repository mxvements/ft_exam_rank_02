
#include <unistd.h>

int	ft_isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c);
	else if (c >= 'A' && c <= 'Z')
		return (c);
	return (0);
}

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (0);
}

void	snake_to_camel(char *s)
{
	int	i;
	int c;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '_' && ft_isalpha(s[i + 1]) != 0)
		{
			i++;
			c = ft_toupper(s[i]);
			write(1, &c, 1);
		}
		else if(ft_isalpha(s[i]) != 0)
			write(1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	write(1, "\n", 1);
	return (0);
}

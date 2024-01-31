
#include <unistd.h>

int	ft_isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c);
	else if (c >= 'A' && c <= 'Z')
		return (c);
	return (0);
}

void	last_word(char *s)
{
	char *lw;

	lw =  NULL;
	while (*s != '\0')
	{
		if (*s == ' ' && ft_isalpha(*(s + 1)) != 0)
			lw = s + 1;
		s++;
	}
	if (!lw)
		return ;
	while (*lw != '\0')
	{
		if (*lw == ' ')
			break ;
		write(1, lw, 1);
		lw++;
	}
}


int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}

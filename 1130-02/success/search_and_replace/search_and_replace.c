#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* search and replace
 * write a program that takes 3 arguments, the first arg is a str
 * in which to replace a letter (2nd arg) by another onne (3rd arg)
 * If the nbr of arguments is not 3, just display a newline
 * If the 2nd arg is not contained in the 1sr one (the str), then
 * the program simpply rewrites the string followed by a newline
 */

char	*search_and_replace(char *s, char find, char repl)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == find)
			s[i] = repl;
		i++;
	}
	return (s);
}

void	ft_putstr(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	char	*s;

	if (argc == 4 && (argv[2][1] == '\0' || argv[2][1] == '\0'))
	{
		s = search_and_replace(argv[1], argv[2][0], argv[3][0]);
		ft_putstr(s);
	}
	write(1, "\n", 1);
	return (0);
}

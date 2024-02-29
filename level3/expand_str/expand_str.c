
#include <stdio.h>
#include <unistd.h>

void	expand_str(char *s)
{
	int flag = 0;
	if (*s == ' ' || *s == '\t')
		s++;
	while (*s)
	{
		if (*s == ' ' || *s == '\t')
			flag = 1;
		else
		{
			if (flag == 1)
				write(1, "   ", 3);
			flag = 0;
			write(1, s, 1);
		}

		s++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		expand_str(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
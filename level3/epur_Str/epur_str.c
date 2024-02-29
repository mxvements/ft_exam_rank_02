
#include <stdio.h>
#include <unistd.h>


void	epur_str(char *s)
{
	int flag = 0;

	while (*s == ' ' || *s == '\t')
		s++; //skip spaces or tabs at the beginning
	while (*s)
	{
		if (*s == ' ' || *s == '\t')
			flag = 1;
		else
		{
			if (flag == 1)
				write(1, " ", 1);
			flag = 0;
			write(1, s, 1);
		}
		s++;
	}

}


int	 main(int argc, char **argv)
{
	if (argc == 2)
	{
		epur_str(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
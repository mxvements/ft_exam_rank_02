
#include <unistd.h>

char	*ft_strchr(char *s, char c)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}

void	arrint_init(int *arr, int size)
{
	int	i = 0;
	while (i < size)
		arr[i++] = 0;
}

void	inter(char *s1, char *s2)
{
	int		i;
	char 	*c;
	int		flags[255];

	i = 0;
	arrint_init(flags, 255);
	while (s1[i] != '\0')
	{
		c = ft_strchr(s2, s1[i]);
		if (c && flags[(int)*c] == 0)
		{
			write(1, c, 1);
			flags[(int)*c] = 1;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

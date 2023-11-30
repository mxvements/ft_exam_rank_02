#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	size_t i;

	i  = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char *s1 = "";
	char *s2 = "Ho";
	
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
	return (0);
}*/

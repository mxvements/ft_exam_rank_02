
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;

	while (s2[i] && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	char **out;

	//first, we count words
	while (str[i])
	{
		while (str[i] && (str[i] == ' '|| str[i] == '\t' || str[i] == '\n'))
			i++;
		wc++;
		while (str[i] && !(str[i] == ' '|| str[i] == '\t' || str[i] == '\n'))
			i++;
	}
	out = (char **)malloc(sizeof(char *) * (wc + 1));
	out[wc] = NULL;
	//we add words to array
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' '|| str[i] == '\t' || str[i] == '\n'))
			i++; //start of word
		j = i; 
		while (str[i] && !(str[i] == ' '|| str[i] == '\t' || str[i] == '\n'))
			i++; //end of word
		if (i > j) //i-j = strlen
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k], &str[j], i-j);
			k++;
		}
	}
	return (out);
}


//COMMENT MAIN, just for test
int	main(void)
{
	char **list1 = ft_split("hola que tal");

	int i = 0;
	while (list1[i])
	{
		printf("%d: %s\n", i, list1[i]);
		i++;
	}
	return (0);
}
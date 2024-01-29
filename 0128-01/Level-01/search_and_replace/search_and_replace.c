
#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *s)
{
    int i;
    i = 0;
    while (s[i] != 0)
        i++;
    return (i);
}

void    search_and_replace(char *str, char *needle, char *haystack)   
{
    int i;

    if (ft_strlen(needle) > 1 || ft_strlen(haystack) > 1)
        return ;
    i = 0;
    while (str[i] != 0)
    {
        if (str[i] == *needle)
            write(1, haystack, 1);
        else
            write(1, &str[i], 1);
        i++;
    }
    
}

int main(int argc, char **argv)
{
    if (argc == 4)
        search_and_replace(argv[1], argv[2], argv[3]);
    write(1, "\n", 1);
    return (0);
}

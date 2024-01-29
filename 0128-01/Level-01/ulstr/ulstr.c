
#include <unistd.h>

int ft_toupper(char c)
{
    return (c + ('A' - 'a'));
}

int ft_tolower(char c)
{
    return (c + ('a' - 'A'));
}

int ft_islower(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c);
    return (0);
}
int ft_isupper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c);
    return (0);
}

void    ulstr(char *s)
{
    int i;
    char c;

    i = 0;
    while (s[i] != '\0')
    {
        if (ft_islower(s[i]) != 0)
        {
            c = ft_toupper(s[i]);
            write(1, &c, 1);
        }
        else if (ft_isupper(s[i]) != 0)
        {
            c = ft_tolower(s[i]);
            write(1, &c, 1);
        }
        else
            write(1, &s[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        ulstr(argv[1]);
    write(1, "\n", 1);
    return (0);
}

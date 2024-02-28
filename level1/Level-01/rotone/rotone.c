
#include <unistd.h>

int ft_isalpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c);
    if (c >= 'A' && c <= 'Z')
        return (c);
    return (0);
}

void    rotone(char *s)
{
    int     i;
    char    c;

    i = 0;
    while (s[i] != '\0')
    {
        if (ft_isalpha(s[i]) != 0 && (s[i] != 'z' && s[i] != 'Z'))
        {
            c = s[i] + 1;
            write(1, &c, 1);
        }
        else if(s[i] == 'z')
            write(1, "a", 1);
        else if(s[i] == 'Z')
            write(1, "A", 1);
        else
            write(1, &s[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);
    write(1, "\n", 1);
    return (0);
}

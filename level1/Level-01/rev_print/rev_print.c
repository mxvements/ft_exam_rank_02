
#include <unistd.h>

static int  ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

void    rev_print(char *s)
{
    const int   len = ft_strlen(s);
    int         i;

    i = len;
    while (--i >= 0)
    {
        write(1, &s[i], 1);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rev_print(argv[1]);
    write(1, "\n", 1);
    return (0);
}

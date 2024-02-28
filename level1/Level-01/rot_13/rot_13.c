
#include <unistd.h>

int ft_isalpha(char c)
{
    if ( c >= 'a' && c <= 'z')
        return (c);
    else if ( c >= 'A' && c <= 'Z')
        return (c);
    return (0);
}

void    rot_13(char *s)
{
    int     i;
    char    c;

    i = 0;
    while (s[i] != '\0')
    {
        if (ft_isalpha(s[i]) != 0)
        {
            if (s[i] < ('a' + 13) || s[i] < ('A' + 13))
            {
                c = (s[i] + 13); 
                write(1, &c, 1);
            }
            else
            {
                c = s[i] - 13; 
                write(1, &c, 1);
            } 
        }
        else
            write(1, &s[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rot_13(argv[1]);
    write(1, "\n", 1);
    return (0);
}

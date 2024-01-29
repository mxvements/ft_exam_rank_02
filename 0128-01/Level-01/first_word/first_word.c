
#include <unistd.h>
#include <stdio.h>

int isspace(int c)
{
    if (c == ' ' || c == '\t' || c == '\v' || c == '\n' || c == '\f' || c == '\r')
        return (c);
    return (0);
}

int isalpha(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c);
    else if (c >= 'a' && c <= 'z')
        return (c);
    return (0);
}

int isnumeric(int c)
{
    if (c >=48 && c <=57)
        return (c);
    return (0);
}

int ispunct(int c)
{
    if (isalpha(c) != 0 || isnumeric(c) != 0)
        return (0);
    if (c >= 33 && c <= 125)
        return (c);
    return (0);
}

void    first_word(char *str)
{
    int i;
    int c;

    i = 0;

    while (str[i] != '\0' && isspace(str[i]) != 0)
        i++;
    while (str[i] != '\0' && (ispunct(str[i]) != 0 || isalpha(str[i]) != 0))
    {
        write(1, &str[i], 1);
        i++;
    }
}


int main(int argc, char **argv)
{
    if (argc == 2)
        first_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}

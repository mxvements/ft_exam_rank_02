
#include <unistd.h>

void    ft_putstr(char *str)
{
    size_t i;

    i = 0;
    while (str[i] != '\0')
        write(1, &str[i++], 1);
}

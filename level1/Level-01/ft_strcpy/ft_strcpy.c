
#include <unistd.h>

//s1 == dest
//s2 == src
char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    if (s2[i] == '\0')
        s1[i] = '\0';
    return (s1);
}

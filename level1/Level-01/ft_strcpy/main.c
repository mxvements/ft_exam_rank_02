#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

char    *ft_strcpy(char *s1, char *s2);

int main(void)
{
    char    *s1 = "\0";
    char    s2[10];
    char    *s_c;
    char    *s_ft;

    s_c = strcpy(s2, s1);
    s_ft = ft_strcpy(s2, s1);
    if (s_c == s_ft)
        write(1, "OK\n", 3);
    else
        write(1, "NOT ok\n", 7);
    
    return (0);
}

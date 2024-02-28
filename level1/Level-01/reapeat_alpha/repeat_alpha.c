
#include <stdio.h>
#include <unistd.h>

void    repeat_alpha(char *s)
{
    int r;
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        r = 1;
        if (s[i] >= 'A' && s[i] <= 'Z')
            r += s[i] - 'A';
        else if (s[i] >= 'a' && s[i] <= 'z')
            r += s[i] - 'a';
        while (r > 0)
        {
            write(1, &s[i], 1);
            r--;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        repeat_alpha(argv[1]);
    write(1, "\n", 1);
    return (0);
}


#include <unistd.h>

void    putnbr(int nbr)
{
    int c;

    if (nbr > 10)
        putnbr(nbr / 10);
    c = 48 + (nbr % 10);
    write(1, &c, 1);
}

void    fizzbuzz(void)
{
    //print nbr from 1 to 100
    const int   end = 100;
    int   start = 1;

    while (start <=end)
    {
        //if nbr is multiple of 3, prints fizz
        if (start % 3 == 0)
            write(1, "fizz", 4);
        //if the nbr is mult of 5, prints buzz
        if (start % 5 == 0)
            write(1, "buzz", 4);
        //else, put nbr
        if ((start % 3 != 0) && (start % 5 != 0))
            putnbr(start);
        write(1, "\n", 1);
        start++;
    }
    
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    fizzbuzz();
    return (0);
}

while true
do
    cc -g3 -Wall -Wextra -Werror rev_print.c -o rev_print
    ./rev_print "zaz" | cat -e
    ./rev_print "dub0 a POIL" | cat -e
    ./rev_print | cat -e
    sleep 5
    clear
done

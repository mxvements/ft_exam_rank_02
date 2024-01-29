while true
do
    cc -g3 -Wall -Wextra -Werror repeat_alpha.c -o repeat_alpha
    ./repeat_alpha "abc"
    ./repeat_alpha "Alex." | cat -e
    ./repeat_alpha 'abacadaba 42!' | cat -e
    ./repeat_alpha | cat -e
    ./repeat_alpha "" | cat -e
    sleep 10
    clear
done

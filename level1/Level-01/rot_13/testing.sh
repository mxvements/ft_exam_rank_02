while true
do
    cc -g3 -Wall -Wextra -Werror rot_13.c -o rot_13
    ./rot_13 "abc"
    ./rot_13 "My horse is Amazing." | cat -e
    ./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
    ./rot_13 | cat -e
    ./rot_13 "" | cat -e
    sleep 5
    clear
done

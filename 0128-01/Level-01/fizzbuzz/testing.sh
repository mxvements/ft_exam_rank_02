while true
do
    cc -g3 -Wall -Wextra -Werror fizzbuzz.c -o fizzbuzz
    ./fizzbuzz
    sleep 10
    clear
done

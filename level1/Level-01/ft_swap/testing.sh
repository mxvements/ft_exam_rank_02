while true
do
    cc -g3 -Wall -Wextra -Werror main.c ft_swap.c -o ft_swap
    ./ft_swap
    sleep 5
    clear
done

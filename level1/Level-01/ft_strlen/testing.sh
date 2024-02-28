while true
do
    cc -g3 -Wall -Wextra -Werror main.c ft_strlen.c -o ft_strlen
    ./ft_strlen
    sleep 5
    clear
done

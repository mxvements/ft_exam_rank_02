while true
do
    cc -g3 -Wall -Wextra -Werror main.c ft_strcpy.c -o ft_strcpy
    ./ft_strcpy
    sleep 5
    clear
done

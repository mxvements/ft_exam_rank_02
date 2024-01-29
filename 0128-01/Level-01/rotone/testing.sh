while true
do
    cc -g3 -Werror -Wall -Wextra rotone.c -o rotone
    ./rotone "abc"
    ./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
    ./rotone "AkjhZ zLKIJz , 23y " | cat -e
    ./rotone "" | cat -e
    ./rotone "" | cat -e
    sleep 3
    clear
done

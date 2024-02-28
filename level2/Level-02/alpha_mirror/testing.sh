while true
do
	cc -g3 -Wall -Wextra -Wall alpha_mirror.c -o alpha_mirror
	./alpha_mirror "abc"
	./alpha_mirror "My horse is Amazing." | cat -e
	./alpha_mirror | cat -e
	sleep 5
	clear
done

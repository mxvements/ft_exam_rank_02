while true
do
	cc -g3 -Wall -Wextra -Werror do_op.c -o do_op
	./do_op "123" "*" 456 | cat -e
	./do_op "9828" "/" 234 | cat -e
	./do_op "1" "+" "-43" | cat -e
	./do_op | cat -e
	sleep 4
	clear
done

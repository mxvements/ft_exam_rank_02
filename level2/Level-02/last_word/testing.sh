while true
do
	cc -g3 -Wall -Wextra -Werror last_word.c -o last_word
	echo "(1)"
	./last_word "FOR PONY" | cat -e
	echo "(2)"
	./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
	echo "(3)"
	./last_word "   " | cat -e
	echo "(4)"
	./last_word "a" "b" | cat -e
	echo "(4)"
	./last_word "  lorem,ipsum  " | cat -e
	sleep 4
	clear
done

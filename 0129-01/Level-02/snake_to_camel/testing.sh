while true
do
	cc -g2 -Wall -Wextra -Werror snake_to_camel.c -o snake_to_camel
	./snake_to_camel "here_is_a_snake_case_word"
	./snake_to_camel "hello_world" | cat -e
	./snake_to_camel | cat -e
	sleep 4
	clear
done

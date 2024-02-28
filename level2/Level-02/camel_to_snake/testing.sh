while true
do
	cc -g3 -Wall -Wextra -Werror camel_to_snake.c -o camel_to_snake
	./camel_to_snake "hereIsACamelCaseWord"
	./camel_to_snake "helloWorld" | cat -e
	./camel_to_snake | cat -e
	sleep 4
	clear
done

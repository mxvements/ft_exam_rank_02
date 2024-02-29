while true
do
	cc -Wall -Wextra -Werror epur_str.c -o epur_str
	./epur_str "See? It's easy to print the same thing" | cat -e
	./epur_str " this        time it      will     be    more complex  . " | cat -e
	./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
	./epur_str "" | cat -e
	sleep 3
	clear
done

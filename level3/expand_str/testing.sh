while true
do 
	cc -Wall -Wextra -Werror expand_str.c -o expand_str
	./expand_str "See? It's easy to print the same thing" | cat -e
	./expand_str " this        time it      will     be    more complex  " | cat -e
	./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
	./expand_str "" | cat -e
	sleep 3
	clear
done
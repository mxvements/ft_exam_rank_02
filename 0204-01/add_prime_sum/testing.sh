while true
do
	cc -Wall -Wextra -Werror -g3 add_prime_sum.c -o add_prime_sum.c
	./add_prime_sum 5
	./add_prime_sum 7 | cat -e
	./add_prime_sum | cat -e
	sleep 4
	clear
done

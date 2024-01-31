while true
do
	cc -g3 -Wextra -Werror -Wall wdmatch.c -o wdmatch
	./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
	./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
	./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
	./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
	./wdmatch | cat -e
	sleep 4
	clear
done


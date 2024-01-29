while true
do
    cc -g3 -Wall -Werror -Wextra search_and_replace.c -o search_and_replace
    ./search_and_replace "Papache est un sabre" "a" "o"
    ./search_and_replace "zaz" "art" "zul" | cat -e
    ./search_and_replace "zaz" "r" "u" | cat -e
    ./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
    ./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
    ./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
    sleep 4
    clear
done

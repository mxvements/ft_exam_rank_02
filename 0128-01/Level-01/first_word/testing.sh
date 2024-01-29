while true
do
    cc -g3 first_word.c -o first_word
    ./first_word "FOR PONY" | cat -e
    ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
    ./first_word "   " | cat -e
    ./first_word "a" "b" | cat -e
    ./first_word "  lorem,ipsum  " | cat -e
    sleep 10
    clear
done

while true
do
    cc -g3 -Wextra -Werror -Wall ulstr.c -o ulstr
    ./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
    ./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
    ./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
    ./ulstr | cat -e
    sleep 5
    clear
done


clang++ -Wall -Wextra -Werror -std=c++98 *.cpp -o tester02
clear
./tester02 | cat -e
rm tester02
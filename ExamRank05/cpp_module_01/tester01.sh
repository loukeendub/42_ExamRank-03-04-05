clang++ -Wall -Wextra -Werror -std=c++98 *.cpp -o tester01
clear
./tester01 | cat -e
rm tester01
clang++ -Wall -Wextra -Werror -std=c++98 *.cpp -o tester00
clear
./tester00 | cat -e
rm tester00
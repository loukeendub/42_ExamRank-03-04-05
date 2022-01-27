#!bin.sh
echo "[ START TESTING ]"
#[mini_paint]
gcc -Wall -Wextra -Werror mini_paint.c
./a.out test/1 >> my_result
./a.out test/2 >> my_result
./a.out test/ex_1 >> my_result
./a.out test/ex_2 >> my_result
#[our_mini_paint]
gcc -Wall -Wextra -Werror our_mini_paint.c
./a.out test/1 >> our_result
./a.out test/2 >> our_result
./a.out test/ex_1 >> our_result
./a.out test/ex_2 >> our_result
#[compare results]
diff -U 3 my_result our_result
rm -rf my_result our_result a.out
echo "[ END TEST ]"
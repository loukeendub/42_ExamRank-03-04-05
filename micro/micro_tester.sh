#!bin.sh
echo "[ START TESTING ]"
#[micro_paint]
gcc -Wall -Wextra -Werror micro_paint.c
./a.out test/0 >> my_result
./a.out test/1 >> my_result
./a.out test/2 >> my_result
./a.out test/3 >> my_result
./a.out test/4 >> my_result
./a.out test/5 >> my_result
./a.out test/6 >> my_result
./a.out test/7 >> my_result
./a.out test/8 >> my_result
./a.out test/ex_1 >> my_result
./a.out test/ex_2 >> my_result
./a.out test/ex_3 >> my_result
./a.out test/ex_4 >> my_result
#[our_micro_paint]
gcc -Wall -Wextra -Werror our_micro_paint.c
./a.out test/0 >> our_result
./a.out test/1 >> our_result
./a.out test/2 >> our_result
./a.out test/3 >> our_result
./a.out test/4 >> our_result
./a.out test/5 >> our_result
./a.out test/6 >> our_result
./a.out test/7 >> our_result
./a.out test/8 >> our_result
./a.out test/ex_1 >> our_result
./a.out test/ex_2 >> our_result
./a.out test/ex_3 >> our_result
./a.out test/ex_4 >> our_result
#[compare results]
diff -U 3 my_result our_result
echo "[ END TEST ]"
rm -rf my_result our_result a.out
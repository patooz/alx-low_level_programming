gcc -E $CFILE > c - a script that runs a C file through the preprocessor and save the result into another file
gcc -c $CFILE - a script that compiles a C file but does not link.
gcc -S $CFILE - a script that generates the assembly code of a C code and save it in an output file.
gcc $CFILE -o cisfun - a script that compiles a C file and creates an executable named cisfun.
4-puts.c - a c program that uses puts to print a line
5-printf.c - a c program that uses printf to print a line
6-size.c - a C program that prints the size of various types on the computer it is compiled and run on
gcc -S -masm=intel $CFILE - Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

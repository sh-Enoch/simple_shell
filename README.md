# simple_shell
allowed functions for the shell include:

access()
chdir()
close()
execve()
exit()
_exit()
fflush()
fork()
free()
getcwd()
getline()
getpid()
isatty()
kill()
malloc()
open()
opendir()
perror()
read()
readdir()
signal()
stat()
lstat()
fstat()
strtok()
wait()
waitpid()
wait3()
wait4()
write()

how we compiled	
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh


objective of how the shell should look like in interactive mode

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$

in non interactive mode

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$

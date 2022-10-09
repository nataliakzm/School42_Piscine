# Shell01
![Build Status](https://camo.githubusercontent.com/d76fd7565bd13dcb9562621ba516f3d08387b3bcbad9c605ba62e3de7de03da2/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f5368656c6c2d426173682d626c7565)

### Exercise 01: print_groups
Write a command line that will display the list of groups for which the login, contained in the environment variable `FT_USER` , is a member. Separated by commas without spaces. Examples:

- for `FT_USER=nours`, the result is _"god,root,admin,master,nours,bocal"_ (without quotation marks)
```sh
$>./print_groups.sh
god,root,admin,master,nours,bocal$>
```
- for `FT_USER=daemon`, the result is _"daemon,bin"_ (without quotation marks)
```sh
$>./print_groups.sh
daemon,bin$>
```
**Solution:** 
Create a file with
```sh
#!/bin/sh
id -Gn $FT_USER | tr "\ " "," | tr -d "\n"
```
OR
```sh
#!/bin/sh
groups $FT_USER | tr ' ' ',' | tr -d '\n'
```

### Exercise 02:  find_sh
Write a command line that searches for all file names that end with `".sh"` (without quotation marks) in the current directory and all its sub-directories. It should display only the file names without the `.sh`. Example of output:
```sh
$>./find_sh.sh | cat -e
find_sh$
file1$
file2$
file3$
$>
```
**Solution:** Creatie a file with the next command:
```sh
#!/bin/sh
find . -type f -name '*.sh' -execdir basename {} .sh ';'
```

### Exercise 03:  count_files
Write a command line that counts and displays the number of regular files and directories in the current directory and all its sub-directories. It should include `"."`, the starting directory. Example of output:
```sh
$>./count_files.sh | cat -e
42$
$>
```
**Solution:** 
```sh
find . -type f -o -type d | wc -l | sed 's: ::g'
```

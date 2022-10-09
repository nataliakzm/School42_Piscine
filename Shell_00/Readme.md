# Shell00
![Build Status](https://camo.githubusercontent.com/d76fd7565bd13dcb9562621ba516f3d08387b3bcbad9c605ba62e3de7de03da2/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f5368656c6c2d426173682d626c7565)

### Exercise 00: Z
Create a file called z that returns _"Z"_, followed by a new line, whenever the command `cat` is used on it.
```sh
?>cat z
Z
?>
```
**Solution:** `echo Z > z`

### Exercise 01: testShell00
Figure out a way for the output to look like this (except for the `total 1` line):
```sh
%>ls -l
total 1
-r--r-xr-x 1 XX XX 40 Jun 1 23:45 testShell00
%>
```
Once you’ve achieved the previous steps, execute the following command to create the file to be submitted: `tar -cf testShell00.tar testShell00`.

**Solution:** 
1)  Adding some weight to the file: **40 byte**
```sh
%> printf "1234567890123456789012345678901234567890" >  ./testShell00
```
2)  Specifing the date: **Jun 1 12:42**, where:
- `-с` - don’t create any files;
- `-t STAMP` - use `[[CC]YY]MMDDhhmm[.ss]` instead of current time
```sh
%> touch -c -t 06012342 testShell00
```
 3)  Setting permissions: `455` so that, one can read, can't write and can't execute
```sh
%> cmod 455 ./testShell00
```
 4)  Check if everything is correct
```sh
%> ls -l ./testSell00
```
 5)  Creating .tar file
```sh
%> tar -cf testShell00.tar testShell00
```

### Exercise 02: Oh yeah, mooore...
Create the following files and directories. Do what’s necessary so that when you use the `ls -l` command in your directory, the output will looks like this :
```sh
%>ls -l
total XX
drwx--xr-x XX XX XX Jun 1 20:47 test0
-rwx--xr-- XX XX  4 Jun 1 21:46 test1
dr-x---r-- XX XX XX Jun 1 22:45 test2
-r-----r-- XX XX  1 Jun 1 23:44 test3
-rw-r----x XX XX  2 Jun 1 23:43 test4
-r-----r-- XX XX  1 Jun 1 24:44 test5
lrwxrwxrwx XX XX  5 Jun 1 22:20 test6 ->  test0
%>
```
Once you’ve done that, run `tar -cf exo2.tar *` to create the file to be submitted.

**Solution:**
1) Creating directories and files. Note that test6 is a symbolic link to test0, and test5 is a hard link to test3;

```sh
%>mkdir test0 test2
touch test1 test3 test4
%>
```
2) Adjusting the weight of the files
```sh
%>printf “1234” > ./test1 
printf “1” > ./test3
printf “12” > ./test4
%>
```
3) Setiing the date
```sh
%>touch -t 06012047 test0
```
4) Setting the date for a symbolically linked file
```sh
%>touch -ht 06012220 test6
```
5) Regulating permissions:
```sh
%>chmod 715 ./test0
chmod 714 ./test1
chmod 504 ./test2
chmod 404 ./test3
chmod 641 ./test4
%>
```
 6)  Check if everything is correct
```sh
%> ls -l
```
 5)  Creating .tar file
```sh
%>run tar -cf exo2.tar *
```

### Exercise 03: SSH me!
Create your own SSH key

**Solution:** `cat ~/.ssh/id_rsa.pub`

### Exercise 04: midLS
In a midLS file, place the command line that will list all files and directories in your current directory (except for hidden files or any file that starts by a dot - yes, that includes double-dots), separated by a comma, by order of modification date. Make sure the directory’s names are followed by a slash character.

**Solution:** `ls -mtUp OR ls -tmp`

### Exercise 05: GiT commit
Create a shell script that displays the ids of the last 5 commits of your git repository.
```sh
%>bash git_commit.sh | cat -e
baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
2f52d74b1387fa80eea844969e8dc5483b531ac1$
905f53d98656771334f53f59bb984fc29774701f$
5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
e94d0b448c03ec633f16d84d63beaef9ae7e7be8$
%>
```
**Solution:** Write down this to your script
```sh
#!/bin/sh
git log --format=%H -5 
```

### Exercise 06: gitignore
In this exercice, you will write a short shell script that lists all the existing files ignored by your GiT repository. Example:
```sh
%>bash git_ignore.sh | cat -e
.DS_Store$
mywork.c~$
%>
```
**Solution:** Write down this to your script
```sh
#!/bin/sh
git status --ignored -s | grep '!!' | cut -f 2 -d' '
```

### Exercise 07: diff
Create a file b, so that :
```sh
%>diff a b > sw.diff
```
**Solution:** 
1) Extract the tar file
```sh
%>tar -xf ./'resources.tar.gz'
```
2) Patch takes a `sw.diff` file (with the description of all new changes, which it compares to the text in file a) and creates a file b: an old text with new changes
```sh
%> patch ./a -o ./b < ./sw.diff
```
3) Check the result
```sh
%>cat -e ./b 
```

### Exercise 08: clean
In a file called clean place the command line that will search for all files - in the current directory as well as in its sub-directories - with a name ending by ~, or a name that start and end by #
The command line will show and erase all files found.
Only one command is allowed: no ’;’ or ’&&’ or other shenanigans.

**Solution:** Write down this to your script
```sh
find . -type f \( -name "*~" -o -name "#*#" \) -print -delete
```

### Exercise 09:  Illusions, not tricks, Michael... 
Create a magic file called ft_magic that will be formatted appropriately to detect
files of 42 file type, built with a "42" string at the 42nd byte.

**Solution:** Write down this to your script -  `sh 41 string 42 42 file`


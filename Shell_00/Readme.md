# Shell00
![Build Status](https://camo.githubusercontent.com/d76fd7565bd13dcb9562621ba516f3d08387b3bcbad9c605ba62e3de7de03da2/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f5368656c6c2d426173682d626c7565)

### Exercise 00: Z
Create a file called z that returns _"Z"_, followed by a new line, whenever the command `cat` is used on it.
```sh
?>cat z
Z
?>
```
**Solution:** `echo Z > z
`
### Exercise 01: testShell00
Figure out a way for the output to look like this (except for the `total 1` line):
```sh
?>ls -l
total 1
-r--r-xr-x 1 XX XX 40 Jun 1 23:45 testShell00
?>
```
Once you’ve achieved the previous steps, execute the following command to create the file to be submitted: `tar -cf testShell00.tar testShell00`.

**Solution:** 
1)  Adding some weight to the file: **40 byte**
```sh
?> printf "1234567890123456789012345678901234567890" >  ./testShell00
```
2)  Specifing the date: **Jun 1 12:42**, where:
- `-с` - don’t create any files;
- `-t STAMP` - use `[[CC]YY]MMDDhhmm[.ss]` instead of current time
```sh
?> touch -c -t 06012342 testShell00
```
 3)  Setting permissions: `455` so that, one can read, can't write and can't execute
```sh
?> cmod 455 ./testShell00
```
 4)  Check if everything is correct
```sh
?> ls -l ./testSell00
```
 5)  Creating .tar file
```sh
?> tar -cf testShell00.tar testShell00
```
### Exercise 02: Oh yeah, mooore...
Create the following files and directories. Do what’s necessary so that when you use the `ls -l` command in your directory, the output will looks like this :
```sh
?>ls -l
total XX
drwx--xr-x XX XX XX Jun 1 20:47 test0
-rwx--xr-- XX XX  4 Jun 1 21:46 test1
dr-x---r-- XX XX XX Jun 1 22:45 test2
-r-----r-- XX XX  1 Jun 1 23:44 test3
-rw-r----x XX XX  2 Jun 1 23:43 test4
-r-----r-- XX XX  1 Jun 1 24:44 test5
lrwxrwxrwx XX XX  5 Jun 1 22:20 test6 ->  test0
?>
```
Once you’ve done that, run `tar -cf exo2.tar *` to create the file to be submitted.

**Solution:**
1) Creating directories and files. Note that test6 is a symbolic link to test0, and test5 is a hard link to test3;

```sh
?>mkdir test0 test2
touch test1 test3 test4
?>
```
2) Adjusting the weight of the files
```sh
?>printf “1234” > ./test1 
printf “1” > ./test3
printf “12” > ./test4
?>
```
3) Setiing the date
```sh
?>touch -t 06012047 test0
```
4) Setting the date for a symbolically linked file
```sh
?>touch -ht 06012220 test6
```
5) Regulating permissions:
```sh
?>chmod 715 ./test0
chmod 714 ./test1
chmod 504 ./test2
chmod 404 ./test3
chmod 641 ./test4
```
 6)  Check if everything is correct
```sh
?> ls -l
```
 5)  Creating .tar file
```sh
?>run tar -cf exo2.tar *
```

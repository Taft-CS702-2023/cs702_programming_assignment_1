#include <stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <unistd.h>

void main(){
    int fd = open("test.txt", O_RDONLY | O_CREAT);
    char c[10];
    int final = read(fd, c, 10);
    int sec = open("test2.txt", O_WRONLY | O_CREAT);
    write(sec, c, final);
}

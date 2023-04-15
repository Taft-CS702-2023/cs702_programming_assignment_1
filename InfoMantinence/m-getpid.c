#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
    int i = getpid();
    printf("%d\n", i);
}

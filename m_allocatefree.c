#include <stdio.h>
#include <stdlib.h>
int main(){
    int* p;
    int numOfArrayElements;
    p = (int*)malloc(numOfArrayElements * sizeof(int));
    free(p);
}

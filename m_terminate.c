#include <stdio.h>
#include <stdlib.h>
//the generates an error - I don't know how make this work in c
//but my guess is that this would work in c++
#include <bits/stdc++.h>

//referenced geeksforgeeks to do this
void foo(){
    cout << "exited";
}

int main(){
    int num;
    num = atexit(foo);
    if(num != 0){
        exit(1)
    }
    printf("worked");
    return 0;
}

#include <unistd.h>
#include <stdio.h>
void main(){
    sleep(5);
    while(1){
        if(printf("Wake up!")){
            break;
        }
    }
}

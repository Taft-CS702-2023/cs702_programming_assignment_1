#include <unistd.h>
#include <signal.h>
#include <stdio.h>
void ALARMhandler(int thing){
    signal(SIGALRM, SIG_IGN);
    printf("dingding");
    signal(SIGALRM, ALARMhandler);
}

void main(){
    signal(SIGALRM, ALARMhandler);
    alarm(5);
    while(1);
    printf("[unpleasantly loud intrusive beeping]");
}

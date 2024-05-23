#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>
#include<sys/wait.h>

void forkExample();
int main(){
    forkExample();
    return 0;
}

void forkExample() {

    /*here we dont know whether operating system will give 1st priority to child or parent*/
    __pid_t p = fork();
    if (p < 0){
        perror("fork fail");
    }
    else if(p == 0){
        printf("hello from child\n");
    }
    else{
        printf("hello from parent\n");
    }
}

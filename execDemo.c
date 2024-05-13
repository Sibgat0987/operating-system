#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void execvpExample(){
char *args[]={"./execvp",NULL};
execvp(args[0],args);
printf("execvp\n");
// execv is similar to this
}
void execlpExample(){
    char *args[]={"./execlp",NULL};
    execlp("./execlp",args[0],NULL);
    printf("execlp\n");
}
void execlExample(){
   char *args[]={"./execl",NULL};
    execl("./execl",args[0],NULL);
    printf("execl\n");  
}
void execleExample(){
    char *my_env[] = {"NAME=anda","COLLEGE=NIT Srinagar", NULL};
     execle("./execle", "execle","running execle() system call", NULL, my_env);
}
void execveExample(){
    char *args[]={"./execve",NULL};
    char *my_env[] = {NULL};
     execve("./execve",args, my_env);
}
int main(){
execveExample();
return 0;
}

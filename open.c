#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
 
extern int errno;
 
int main()
{

    int fd = open("sample.txt", O_RDONLY | O_CREAT);
 
    printf("fd = %d\n", fd);
 
    if (fd == -1) {
       
        printf("Error Number % d\n", errno);
 
        // print program detail "Success or failure"
        perror("Program");
    }
    return 0;
}
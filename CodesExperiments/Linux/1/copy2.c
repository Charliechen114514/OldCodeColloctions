#include <sys/stat.h>
#include <fcntl.h>
#include <tlpi_hdr.h>

#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif

int main(int argc, char const *argv[])
{
    int inputFd, outputFd, openFlags;
    mode_t filePermissons;
    ssize_t numRead;
    char buf[BUF_SIZE];
    if(argc != 3 || strcmp(argv[1], "--help") == 0){
        usageErr("%s old-file new file\n", argv[0]);
    }

    // set the source file Read Only
    inputFd = open(argv[1], O_RDONLY);
    if(inputFd == -1){
        errExit("open file %s", argv[1]);
    }

    openFlags = O_CREAT | O_WRONLY | O_TRUNC;
    filePermissons = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP |\
                     S_IROTH | S_IWOTH;

    outputFd = open(argv[2], openFlags, filePermissons);
    if(outputFd == -1){
        errExit("open file %s", argv[2]);
    }
    
    while((numRead = read(inputFd, buf, BUF_SIZE)) > 0){
        if(write(outputFd, buf, numRead) != numRead)
            fatal("couldn't write whole Buf!\n");
    }

    if(numRead == -1){
        errExit("Read");
    }

    if(close(inputFd) == -1 || close(outputFd) == -1){
        errExit("close");
    }

    return 0;
}

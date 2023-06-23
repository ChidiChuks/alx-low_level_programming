#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void __attribute__((constructor)) init(void) {
    int fd;
    char jackpot[] = "9 8 10 24 75 9\n";
    
    fd = open("/tmp/gm_numbers", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd != -1) {
        write(fd, jackpot, sizeof(jackpot) - 1);
        close(fd);
    }
}

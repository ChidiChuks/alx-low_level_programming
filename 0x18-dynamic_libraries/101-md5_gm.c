#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *file;
    char cmd[100];

    file = fopen("/tmp/gm_numbers", "w");
    if (file == NULL) {
        printf("Failed to create /tmp/gm_numbers file\n");
        return 1;
    }

    fprintf(file, "9\n8\n10\n24\n75\n9\n");
    fclose(file);

    strcpy(cmd, "chmod 777 /tmp/gm_numbers");
    system(cmd);

    return 0;
}

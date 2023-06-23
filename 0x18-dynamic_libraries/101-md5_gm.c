#include <stdio.h>
#include <stdlib.h>

void __attribute__((constructor)) init(void) {
    system("echo -e \"9\\n8\\n10\\n24\\n75\\n9\" > /tmp/gm_numbers");
    system("chmod 777 /tmp/gm_numbers");
}

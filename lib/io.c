
#include "io.h"

int readnum(FILE *fd, char *buf, size_t len) {

    int i = 0;

    for(;;) {
        int c = getc(fd);
        
        if (c == EOF)
            break;
        if (c < '0' || c > '9')
            continue;
            
        buf[i] = c;
        
        if (i+1 > len)
            break;
        i++;
    }

    return i;
}

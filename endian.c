#include <stdio.h>

int main(void) {
    printf("buf = 0xaabbccdd;\n");
    int buf = 0xaabbccdd;
    unsigned char * array = (unsigned char *) &buf;
    for (int i = 0; i < 4; i++) {
        printf("buf[%d] = %#2x\n", i, array[i]);
    }
    if (array[0] == 0xaa) {
        printf("This system is big-endian.\n");
    } else {
        printf("This system is little-endian\n");
    }
}

/*
 * E89 Pedagogical & Technical Lab
 * project:     printf
 * created on:  2022-11-23 - 13:49 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: print_base16.c
 */

#include <unistd.h>

#include "stu.h"

int print_base16(int fd, unsigned int valuevoid)
{
    int remain;
    char hex[120];
    int i;

    i = 0;
    remain = 0;
    if (valuevoid == 0) {
        write(fd, "(null)", 6);
        return 0;
    }
    write(fd, "0x", 2);
    while (valuevoid != 0) {
        remain = valuevoid % 16;
        if (remain < 10) {
            hex[i += 1] = 48 + remain;
            valuevoid = valuevoid / 16;
        } else {
            hex[i += 1] = 87 + remain;
            valuevoid = valuevoid / 16;
        }
    }
    while (i > 0) {
        write(fd, &hex[i], 1);
        i -= 1;
    }
    return 1;
}
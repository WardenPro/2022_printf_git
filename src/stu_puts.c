/*
 * E89 Pedagogical & Technical Lab
 * project:     printf
 * created on:  2022-11-23 - 13:49 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: puts.c
 */

#include "stu.h"

int stu_puts(int fd, const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    if (stu_putchar(fd, str, i) == -1) {
        return (-1);
    }
    return i;
}

/*
 * E89 Pedagogical & Technical Lab
 * project:     printf
 * created on:  2022-11-23 - 13:49 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: putchar.c
 */

#include <unistd.h>

#include "stu.h"

int stu_putchar(int fd, const char *c, int value)
{
    return (write(fd, &*c, value));
}

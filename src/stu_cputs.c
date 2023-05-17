/*
 * E89 Pedagogical & Technical Lab
 * project:     printf
 * created on:  2022-11-23 - 13:49 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: stu_cputs.c
 */

#include <unistd.h>

#include "stu.h"

void stu_cputs(int fd, char charr)
{
    write(fd, &charr, 1);
}

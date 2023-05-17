/*
 * E89 Pedagogical & Technical Lab
 * project:     printf
 * created on:  2022-11-23 - 13:49 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: dputs.c
 */

#include <unistd.h>

#include "stu.h"

void pourcentageD(int fd, long int valued)
{
    int tmp;
    int mod;
    int j;

    j = 0;
    mod = nb_len(valued);
    if (valued <= 2147483647) {
        if (valued < 0) {
            write(fd, "-", 1);
        }
        while (mod > j) {
            tmp = get_digit(valued, mod) + '0';
            write(fd, &tmp, 1);
            mod -= 1;
        }
    }
}

/*
 * E89 Pedagogical & Technical Lab
 * project:     printf
 * created on:  2022-11-23 - 13:49 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: nb_len.c
 */

#include "stu.h"

int nb_len(int nb)
{
    int i;

    i = 0;
    if (nb < 0) {
        nb = nb * -1;
    }
    while (nb > 0) {
        nb = nb / 10;
        i = i + 1;
    }
    return i;
}

/*
 * E89 Pedagogical & Technical Lab
 * project:     printf
 * created on:  2022-11-23 - 13:49 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: get_digit.c
 */

#include "stu.h"

int get_digit(int nb, int index)
{
    int power;

    power = index;
    if (nb < 0) {
        nb = nb * -1;
    }
    if (index == 0) {
        return (nb % 10);
    }

    while (power > 1) {
        nb = nb / 10;
        power = power - 1;
    }
    nb = nb % 10;
    return (nb);
}

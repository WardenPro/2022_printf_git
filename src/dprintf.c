/*
 * E89 Pedagogical & Technical Lab
 * project:     printf
 * created on:  2022-11-23 - 13:49 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: dprintf.c
 */

#include <stdarg.h>
#include <unistd.h>

#include "stu.h"

int condition(int fd, int i, va_list list, const char *pattern)
{
    if (pattern[i] == '%' && pattern[i + 1] == 's') {
        stu_puts(fd, va_arg(list, const char *));
    } else if (pattern[i] == '%' && pattern[i + 1] == 'c') {
        stu_cputs(fd, va_arg(list, int));
    } else if (pattern[i] == '%' && pattern[i + 1] == '%') {
        write(fd, &"%", 1);
    }
    return i;
}

void stu_dprintf(int fd, const char *pattern, ...)
{
    int i;
    va_list list;

    i = 0;
    va_start(list, pattern);
    while (pattern[i] != '\0') {
        if (pattern[i] == '%' && (pattern[i + 1] == 's' ||
                                  pattern[i + 1] == 'c' || pattern[i + 1] == '%')) {
            condition(fd, i, list, pattern);
        } else if (pattern[i] == '%' && pattern[i + 1] == 'p') {
            print_base16(fd, (unsigned int)va_arg(list, void *));
        } else if (pattern[i] == '%' && pattern[i + 1] == 'd') {
            pourcentageD(fd, va_arg(list, long int));
        } else {
            stu_putchar(fd, &pattern[i], 1);
            i -= 1;
        }
        i += 2;
    }
    va_end(list);
}

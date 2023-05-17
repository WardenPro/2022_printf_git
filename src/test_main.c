/*
 * E89 Pedagogical & Technical Lab
 * project:     printf
 * created on:  2022-12-15 - 12:03 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: main
 */

#include "stu.h"

#include <stdio.h>

int main(void)
{
    char *str1 = "Monkey";
    char *str2 = NULL;

    stu_dprintf(1, "stu_dprintf :\n%%        :  %%\n");
    stu_dprintf(1, "bourrage :  %+9dFIN\n", -569);
    stu_dprintf(1, "char *   :  %s\n", "Monkey");
    stu_dprintf(2, "char     :  %c\n", 'a');
    stu_dprintf(1, "int      :| %d\n          | %d\n", 123456789, -123456789);
    stu_dprintf(1, "adress   :| %p\n          | %p\n", str1, str2);
    return 0;
}

/*
 * E89 Pedagogical & Technical Lab
 * project:     2022_printf_git/
 * created on:  Wed May 17 19:55:46 2023
 * 1st author:  user
 * description: stu.h
*/

#ifndef DPRINTF_H_
#define DPRINTF_H_

int get_digit(int nb,int index);

int stu_puts(int fd,const char *str);

int nb_len(int nb);

void stu_dprintf(int fd, const char *pattern, ...);

int stu_putchar(int fd,const char *c, int value);

int print_base16(int fd,unsigned int valuevoid);

void stu_cputs(int fd, char charr);

void pourcentageD(int fd, long int valued);

#endif /* DPRINTF_H */

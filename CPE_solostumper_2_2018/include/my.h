/*
** EPITECH PROJECT, 2019
** project
** File description:
** epitech solo stumper
*/

#ifndef _MY_H_
#define _MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <ncurses.h>

char	*my_revstr(char *);
void 	my_putchar(char);
int     my_strlen(char *);
int	my_putstr(char const *);
char    *my_strdup(char *);
void	my_show_word_array(char **);
int	my_palindrome(char *);

#endif // _MY_H_

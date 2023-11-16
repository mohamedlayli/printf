#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/* This is Custom printf function */
int _printf(const char *format, ...);

/* This is Custom putchar function */
int _putchar(char c);

/* This is for print string */
int prt_str(char *);

#endif /* MAIN_H */

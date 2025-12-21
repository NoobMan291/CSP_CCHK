#pragma once

#define _XOPEN_SOURCE   600
#define _POSIX_C_SOURCE 200112L

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void display(char *path);
void delay_print(char* str, unsigned long fsize, unsigned int milliseconds);

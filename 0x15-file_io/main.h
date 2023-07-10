#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <main.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <elf.h>

int _putchar (char c);
ssize_t read_textfile(const char *filename, size_t letters);

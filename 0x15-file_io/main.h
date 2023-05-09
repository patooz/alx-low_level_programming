#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <elf.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void _check(unsigned char *ptr);
void _magic(unsigned char *ptr);
void _class(unsigned char *ptr);
void _data(unsigned char *ptr);
void _version(unsigned char *ptr);
void _osabi(unsigned char *ptr);
void _abi(unsigned char *ptr);
void _type(unsigned int type, unsigned char *ptr);
void _entry(unsigned long int entry, unsigned char *ptr);
void _close(int file);

#endif /** MAIN_H */

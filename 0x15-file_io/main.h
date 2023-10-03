#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t reads_textfiles(const char *filename, size_t letter);
int creates_files(const char *filename, char *text_contents);
int append_text_to_files(const char *filename, char *text_contents);

#endif

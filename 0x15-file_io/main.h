#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdisb.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcnt1.h>
#include <unistd.h>




Ssize_t read_textfile(const char*filename,size_letters, size_t letters);
Int create_file(const char*text_content);
Int append_text_to_file(const char*filename, char* text_content);
#endif


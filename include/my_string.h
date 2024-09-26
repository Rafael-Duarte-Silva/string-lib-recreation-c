#ifndef MY_STRING_H
#define MY_STRING_H

#include <unistd.h>
#include <stdlib.h>

void *my_memchr(void *pointer, const int value, int size);
int my_memcmp(const void *str1, const void *str2, size_t size);
void *my_memcpy(void *dest_str, const void *src_str, size_t n);
void *my_memmove(void *dest_str, const void *src_str, size_t numBytes);
void *my_memset(void *str, int c, size_t n);
char *my_strcat(char *destination, const char *source);
char *my_strchr(char *str, const int character);
int my_strcmp(const char *str1, const char *str2);
void my_strcpy(char *destination, const char *source);
int my_strcspn(const void *str, const void *search);
int my_strlen(const char *str);
void my_strncat(void *destination, const void *source, size_t size);
int my_strncmp(const char *str1, const char *str2, size_t n);
void my_strncpy(char *destination, const char *source, size_t n);
void *my_strpbrk(void *str, const void *search);
char *my_strrchr(char *str, const int character);
int my_strspn(const void *str, const void *search);
char *my_strstr(char *str, const char *substring);
char *my_strtok(char *str, const char *delimiters);

#endif
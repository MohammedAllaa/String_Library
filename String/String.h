/*
* File: string.h
* Author: Mohamed Alaa
*
*created on July 1, 2023, 4;30 PM
*/
#include<stdio.h>
#include"Types.h"
#ifndef STRING_h
#define STRING_h
void* My_memchr(const void* str, int c, uint8_t n);

int My_memcmp(const void* str1, const void* str2, uint8_t n);

void* My_memcpy(void* dest_str, const void* src_str, uint8_t n);

void* My_memmove(void* dest_str, const void* src_str, uint8_t numBytes);

void* My_memset(void* str, int c, uint8_t n);

char* My_strcat(char* dest_str, const char* src_str);

char* My_strncat(char* dest, const char* src, uint8_t n);

char* My_strchr(const char* str, int search_char);

int My_strcmp(const char* str_1, const char* str_2);

int My_strncmp(const char* str1, const char* str2, uint8_t n);

int My_strcoll(const char* str1, const char* str2);

char* My_strcpy(char* dest, const char* src);

char* My_strncpy(char* dest, const char* src, size_t n);

uint8_t My_strcspn(const char* str1, const char* str2);

uint8_t My_strlen(const char* str);

char* My_strrchr(const char* str, int c);

char* My_strstr(const char* str_1, const char* str_2);

size_t My_strspn(const char* str1, const char* str2);

char* My_strtok(char* str, const char* delim);

size_t My_strxfrm(char* dest, const char* src, size_t n);
#endif

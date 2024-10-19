/*
* File: string.c
* Author: Mohamed Alaa
*
*created on July 1, 2023, 4;30 PM
*/
#include"String.h"

void* My_memchr(const void* str, int c, uint8_t n) {
    const unsigned char* p = (const unsigned char*)str; // Cast the input pointer to unsigned char 

    for (size_t i = 0; i < n; i++) {
        if (p[i] == (unsigned char)c) {
            return (void*)(p + i); // Return the pointer to the first occurrence of the character
        }
    }

    return NULL; // Return NULL if the character is not found in the first n bytes

}

int My_memcmp(const void* str1, const void* str2, uint8_t n) {
    const unsigned char* p1 = (const unsigned char*)str1; // Cast the first input to unsigned char
    const unsigned char* p2 = (const unsigned char*)str2; // Cast the second input to unsigned char

    for (uint8_t i = 0; i < n; i++) {
        if (p1[i] != p2[i]) {
            return p1[i] - p2[i]; // Return the difference if the bytes are not equal
        }
    }

    return 0; // Return 0 if all bytes are equal
}

void* My_memcpy(void* dest_str, const void* src_str, uint8_t n) {
    unsigned char* dest = (unsigned char*)dest_str;    // Cast destination to unsigned char pointer
    const unsigned char* src = (const unsigned char*)src_str;  // Cast source to unsigned char pointer

    for (uint8_t i = 0; i < n; i++) {
        dest[i] = src[i];  // Copy  from src to dest
    }

    return dest_str;  // Return the destination 
}

void* My_memmove(void* dest_str, const void* src_str, uint8_t numBytes) {
    unsigned char* dest = (unsigned char*)dest_str;    
    const unsigned char* src = (const unsigned char*)src_str;  

    if (src < dest && dest < src + numBytes) {
        for (int i = numBytes - 1; i >= 0; i--) {
            dest[i] = src[i];
        }
    }
    else {
        for (uint8_t i = 0; i < numBytes; i++) {
            dest[i] = src[i];
        }
    }

    return dest_str;  
}

void* My_memset(void* str, int c, uint8_t n) {
    unsigned char* p = (unsigned char*)str;  

    for (uint8_t i = 0; i < n; i++) {
        p[i] = (unsigned char)c;  
    }

    return str;  
}

char* My_strcat(char* dest_str, const char* src_str) {
    char* dest_ptr = dest_str;

    while (*dest_ptr != '\0') {
        dest_ptr++;
    }

    while (*src_str != '\0') {
        *dest_ptr = *src_str;
        dest_ptr++;
        src_str++;
    }

    *dest_ptr = '\0';

    return dest_str;  
}

char* My_strncat(char* dest, const char* src, uint8_t n) {
    char* dest_ptr = dest;

    while (*dest_ptr != '\0') {
        dest_ptr++;
    }

    uint8_t i;
    for (i = 0; i < n && *src != '\0'; i++) {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
    }

    *dest_ptr = '\0';

    return dest;  
}

char* My_strchr(const char* str, int search_char) {
    while (*str != '\0') {
        if (*str == (char)search_char) {
            return (char*)str; 
        }
        str++;
    }

    if (search_char == '\0') {
        return (char*)str;
    }

    return NULL;
}

int My_strcmp(const char* str_1, const char* str_2) {
    while (*str_1 != '\0' && *str_2 != '\0') {
        if (*str_1 != *str_2) {
            return (unsigned char)*str_1 - (unsigned char)*str_2;  
        }
        str_1++;
        str_2++;
    }

    return (unsigned char)*str_1 - (unsigned char)*str_2;
}

int My_strncmp(const char* str1, const char* str2, uint8_t n) {
    for (uint8_t i = 0; i < n; i++) {
        if (*str1 == '\0' || *str2 == '\0') {
            return (unsigned char)*str1 - (unsigned char)*str2;
        }

        if (*str1 != *str2) {
            return (unsigned char)*str1 - (unsigned char)*str2; 
        }

        str1++;
        str2++;
    }

    
    return 0; 
}

int My_strcoll(const char* str1, const char* str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 < *str2) {
            return -1; 
        }
        else if (*str1 > *str2) {
            return 1; 
        }
        str1++;
        str2++;
    }

    if (*str1 == '\0' && *str2 == '\0') {
        return 0; 
    }
    else if (*str1 == '\0') {
        return -1; 
    }
    else {
        return 1; 
    }
}

char* My_strcpy(char* dest, const char* src) {
    char* original_dest = dest; 

    
    while (*src != '\0') {
        *dest = *src; // Copy current character
        dest++;       // Move to the next position in dest
        src++;        // Move to the next character in src
    }

    *dest = '\0'; // Null-terminate the destination string

    return original_dest; 
}

char* My_strncpy(char* dest, const char* src, size_t n) {
    char* original_dest = dest;
    while (n > 0 && *src != '\0') {
        *dest = *src; // Copy current character
        dest++;       // Move to the next position in dest
        src++;        // Move to the next character in src
        n--;          // Decrease the count of characters to copy
    }

    
    while (n > 0) {
        *dest = '\0'; 
        dest++;
        n--;
    }

    return original_dest; 
}

uint8_t My_strcspn(const char* str1, const char* str2) {
    const char* s1; 
    const char* s2; 

    for (s1 = str1; *s1 != '\0'; s1++) {
        for (s2 = str2; *s2 != '\0'; s2++) {
            if (*s1 == *s2) {
                return (uint8_t)(s1 - str1); 
            }
        }
    }
    return (uint8_t)(s1 - str1); 
}

uint8_t My_strlen(const char* str) {
    uint8_t length = 0; 

    while (*str != '\0') {
        
        length++;

        if (length == 255) {
            return 255; 
        }

        str++; 
    }

    return length; 
}

char* My_strrchr(const char* str, int c) {
    const char* last_occurrence = NULL;

    while (*str != '\0') {
        if (*str == (char)c) { 
            last_occurrence = str; 
        }
        str++; 
    }

    if (c == '\0') {
        return (char*)str; 
    }

    return (char*)last_occurrence; 
}

char* My_strstr(const char* str_1, const char* str_2) {
    if (*str_2 == '\0') {
        return (char*)str_1;
    }
    while (*str_1 != '\0') {
        const char* s1 = str_1; 
        const char* s2 = str_2; 

        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
            s1++;
            s2++;
        }

        if (*s2 == '\0') {
            return (char*)str_1; 
        }

        str_1++; 
    }

    return NULL; 
}

size_t My_strspn(const char* str1, const char* str2) {
    size_t count = 0; 

    while (*str1 != '\0') {
        const char* s2 = str2; 
        int found = 0; 

        while (*s2 != '\0') {
            if (*str1 == *s2) {
                found = 1; 
                break; 
            }
            s2++; 
        }

        if (!found) {
            break;
        }
        count++; 
        str1++; 
    }
    return count; 
}

char* My_strtok(char* str, const char* delim) {
    static char* next_token = NULL; 
    if (str != NULL) {
        next_token = str; 
    }

    if (next_token == NULL) {
        return NULL;
    }

    while (*next_token && strchr(delim, *next_token)) {
        next_token++;
    }

    if (*next_token == '\0') {
        return NULL;
    }

    char* token_start = next_token;

    while (*next_token && !strchr(delim, *next_token)) {
        next_token++; 
    }

    if (*next_token) {
        *next_token = '\0'; 
        next_token++; 
    }

    return token_start; 
}

size_t My_strxfrm(char* dest, const char* src, size_t n) {
    size_t i = 0;

    while (src[i] != '\0' && i < n - 1) {
        dest[i] = (char)tolower((unsigned char)src[i]);
        i++;
    }

    if (n > 0) {
        dest[i] = '\0'; 
    }

    return i; 
}






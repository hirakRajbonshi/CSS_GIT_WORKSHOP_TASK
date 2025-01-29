#include "string_utils.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int is_palindrome(const char* str) {
    int left = 0;
    int right = strlen(str) - 1;
    
    
    while (left < right) {
        if (str[left] != str[right])
            return 0; 
        left++;
        right--;
    }
    
    return 1; 
}
#define CHAR_COUNT 256 

int is_anagram(const char* str1, const char* str2) {
    int count[CHAR_COUNT] = {0}; 
    
    
    if (strlen(str1) != strlen(str2))
        return 0;

    
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < CHAR_COUNT; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

#define ALPHABET_COUNT 26

int is_pangram(const char* str) {
    int letters[ALPHABET_COUNT] = {0}; 
    int index;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            index = tolower(str[i]) - 'a'; 
            letters[index] = 1; 
        }
    }

    
    for (int i = 0; i < ALPHABET_COUNT; i++) {
        if (letters[i] == 0)
            return 0; 
    }

    return 1; 
}

#define ALPHABET_COUNT 26

int is_isogram(const char* str) {
    int letters[ALPHABET_COUNT] = {0}; 
    int index;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            index = tolower(str[i]) - 'a'; 
            if (letters[index] > 0)
                return 0; 
            letters[index] = 1; 
        }
    }

    return 1;
}

int is_valid_ip_address(const char* str) {
    if (str == NULL) return 0;

    int num, dots = 0;
    char *copy = strdup(str);
    char *token = strtok(copy, "."); 

    while (token) {
        
        for (int i = 0; token[i] != '\0'; i++) {
            if (!isdigit(token[i])) {
                free(copy);
                return 0; 
            }
        }

        num = atoi(token);
        if (num < 0 || num > 255) {
            free(copy);
            return 0; 
        }

        token = strtok(NULL, ".");
        dots++;
    }

    free(copy);

    return (dots == 4); 
}

int is_valid_email(const char* str) {
    if (str == NULL) return 0;

    const char* at = strchr(str, '@'); 
    if (!at || at == str || strchr(at + 1, '@')) 
        return 0; 

    const char* dot = strrchr(at, '.');
    if (!dot || dot == at + 1 || dot[1] == '\0') 
        return 0; 

    return 1; 
}
int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int is_valid_date(const char* str) {
    if (str == NULL || strlen(str) != 10) return 0;

    
    if (str[2] != '-' || str[5] != '-') return 0;

    int day, month, year;
    day = atoi(str);          
    month = atoi(str + 3);    
    year = atoi(str + 6);     

    
    if (year < 1000 || year > 9999) return 0;

    
    if (month < 1 || month > 12) return 0;

    
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    
    if (month == 2 && is_leap_year(year)) {
        days_in_month[1] = 29;
    }

    
    if (day < 1 || day > days_in_month[month - 1]) return 0;

    return 1; 
}
#include "string_utils.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


char* reverse_string(const char* str){
    int length = strlen(str);
    char* reversed = (char*)malloc(length + 1);
     for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';
    return reversed;
};

char* to_uppercase(const char* str){
    char* uppercase = (char*)malloc(strlen(str) + 1);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            uppercase[i] = str[i] - 32;
        } else {
            uppercase[i] = str[i];
        }
    }
    uppercase[strlen(str)] = '\0';
    return uppercase;
};

char* to_lowercase(const char* str){
    char* lowercase = (char*)malloc(strlen(str) + 1);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            lowercase[i] = str[i] + 32;
        } else {
            lowercase[i] = str[i];
        }
    }
    lowercase[strlen(str)] = '\0';
    return lowercase;
};
int substring_search(const char* str, const char* sub){

};
int count_number_of_vowels(const char* str){
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    return count;
};
int count_number_of_consonants(const char* str){
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if (str[i]!= 'a' && str[i]!= 'e' && str[i]!= 'i' && str[i]!= 'o' && str[i]!= 'u' &&
                str[i]!= 'A' && str[i]!= 'E' && str[i]!= 'I' && str[i]!= 'O' && str[i]!= 'U') {
                count++;
            }
        }
    }
    return count;
};
int count_number_of_words(const char* str){
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] ==' ' || str[i] == '\t' || str[i] == '\n'){
            count++;
        }
    }
    return count + 1;
    

};
int count_number_of_sentences(const char* str){
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == ';') {
            count++;
        }
    }
    return count + 1;
    
 
};
int count_number_of_occurrences(const char* str, const char* sub){
    int count = 0;
    int length = strlen(sub);
    for (int i = 0; i <= strlen(str) - length; i++) {
        if (strncmp(str + i, sub, length) == 0) {
            count++;
        }
    }
    return count;
};
int is_palindrome(const char* str){
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i]!= str[length - 1 - i]) {
            return 0;
        }
    }
    return 1;
 
};
int is_anagram(const char* str1, const char* str2){
    int length = strlen(str1);
    int count[256] = {0};
    for (int i = 0; i < length; i++) {
        count[str1[i]]++;
    }
    for (int i = 0; i < strlen(str2); i++) {
        count[str2[i]]--;
        if (count[str2[i]] < 0) {
            return 0;
        }
    }
    return 1;
};
int is_pangram(const char* str){
    int count[256] = {0};
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            count[str[i] - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] == 0) {
            return 0;
        }
    }
    return 1;
};
int is_isogram(const char* str){
    int count[256] = {0};
    for (int i = 0; i < strlen(str); i++) {
        count[str[i]]++;
        if (count[str[i]] > 1) {
            return 0;
        }
    }
    return 1;
};
int is_valid_ip_address(const char* str){
    int count = 0;
    int segment_count = 0;
    int segment_length = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '.' || i == strlen(str) - 1) {
            if (segment_length == 0 || segment_length > 3) {
                return 0;
            }
            if (!isdigit(str[segment_count]) || (segment_length > 1 && str[segment_count] == '0')) {
                return 0;
            }
            count++;
            segment_count = i + 1;
            segment_length = 0;
        } else {
            segment_length++;
        }
    }
    return count == 4;
};
int is_valid_email(const char* str){
    int at_count = 0, dot_count = 0;
    const char* at_pos = NULL;
    const char* dot_pos = NULL;
    if (str == NULL || *str == '\0') {
        return 0;
    }
    while (*str) {
        if (*str == '@') {
            at_count++;
            at_pos = str;
        } else if (*str == '.') {
            dot_pos = str;
            if (at_pos) dot_count++; 
        } else if (!isalnum(*str) && *str != '_' && *str != '-' && *str != '+') {
            return 0; 
        }
        str++;
    }
    if(at_count != 1 || dot_count == 0) {
        return 0;
    }
    if (dot_pos < at_pos) {
        return 0;
    }
    if (*(dot_pos + 1) == '\0') {
        return 0;
    }
    return 1;
};
int is_valid_date(const char* str){
    int year = 0;
    int month = 0;
    int day = 0;
    sscanf(str, "%d-%d-%d", &year, &month, &day);
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        return 0;
    }
};


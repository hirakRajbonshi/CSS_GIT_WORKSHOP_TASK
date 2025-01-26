#include "string_utils.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* reverse_string(const char* str) {
    if (str == NULL) {
        return NULL;
    }
    int length = strlen(str);
    char* reversed = (char*)malloc(length + 1);
    for (int i = 0; i < length; ++i) {
        reversed[i] = str[length-1-i];
    }

    reversed[length] = '\0';

    return reversed;
}

char* to_uppercase(const char* str) {
    if(str==NULL) return NULL;
    int length = strlen(str);
    char* result = (char*)malloc(length + 1);
    for (int i = 0; i < length; ++i) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            c -= 32;  // Convert lowercase to uppercase
        }
        result[i] = c;
    }
    result[length] = '\0';
    return result;
}

char* to_lowercase(const char* str) {
    if (str == NULL) return NULL;  
    int length = strlen(str); 
    char* result = (char*)malloc(length + 1); 

    
    for (int i = 0; i < length; ++i) {
        char c = str[i];
        if (c >= 'A' && c <= 'Z') {
            c += 32;  
        }
        result[i] = c;
    }
    result[length] = '\0';  
    return result;
}

int substring_search(const char* str, const char* sub) {
    if (str == NULL || sub == NULL) return -1;
    
    int str_len = strlen(str);
    int sub_len = strlen(sub);

    if (sub_len == 0) return 0;

    for (int i = 0; i <= str_len - sub_len; ++i) {
        if (strncmp(&str[i], sub, sub_len) == 0) {
            return i;
        }
    }

    return -1;
}

int count_number_of_vowels(const char* str) {
    if (str == NULL) return 0;

    int count = 0;
    
    for (int i = 0; str[i] != '\0'; ++i) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }

    return count;
}

int count_number_of_consonants(const char* str) {
    if (str == NULL) return 0;

    int count = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        char c = str[i];
        c = tolower(c);  // Convert character to lowercase for uniform comparison

        if ((c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            count++;
        }
    }

    return count;
}

int count_number_of_words(const char* str) {
    if (str == NULL) return 0;

    int count = 0;
    int in_word = 0;  // Flag to track whether we are in a word

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) {
            if (!in_word) {
                count++;  // A new word has started
                in_word = 1;  // We're in a word now
            }
        } else {
            in_word = 0;  // We reached a non-alphabetic character, not in a word anymore
        }
    }

    return count;
}

int count_number_of_sentences(const char* str) {
    if (str == NULL) return 0;

    int count = 0;
    int in_sentence = 0;  // Flag to track whether we're in a sentence

    for (int i = 0; str[i] != '\0'; ++i) {
        // If we encounter a sentence-ending punctuation mark
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            count++;  // Increment sentence count
            // Skip over any spaces following the punctuation mark
            while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
                i++;
            }
        }
    }

    return count;
}

int count_number_of_occurrences(const char* str, const char* sub) {
    if (str == NULL || sub == NULL) return 0;

    int count = 0;
    const char* temp = str;

    while ((temp = strstr(temp, sub)) != NULL) {
        count++;  
        temp++;   
    }

    return count;
}

int is_valid_ip_address(const char* str) {
    if (str == NULL) return 0;

    int dot_count = 0;  
    int num_count = 0;  
    int segment_value = 0;  

    for (int i = 0; str[i] != '\0'; ++i) {

        if (isdigit(str[i])) {

            segment_value = segment_value * 10 + (str[i] - '0');
            num_count++;
        }
        
        else if (str[i] == '.') {
            if (num_count == 0) return 0;
            if (segment_value < 0 || segment_value > 255) return 0;

            dot_count++;  
            segment_value = 0; 
            num_count = 0;  
        } else {
            return 0;
        }
    }

    if (num_count == 0 || segment_value < 0 || segment_value > 255) return 0;

    return dot_count == 3;
}


int main() {

    char str1[100];
    printf("Enter a string to reverse: ");  //reverse string
    fgets(str1, sizeof(str1), stdin);  
    str1[strcspn(str1, "\n")] = '\0';  
    char* reversed_str = reverse_string(str1);

    if (reversed_str != NULL) {
        printf("Reversed string: %s\n", reversed_str);  
        free(reversed_str);  
    } else {
        printf("Error: Memory allocation failed!\n");
    }



    char str2[100];     //uppercase
    printf("Enter a string to convert to uppercase: ");
    fgets(str2, sizeof(str2), stdin);  
    str2[strcspn(str2, "\n")] = '\0';  
    char* uppercase_str = to_uppercase(str2);
    
    if (uppercase_str != NULL) {
        printf("Uppercase string: %s\n", uppercase_str);  
        free(uppercase_str);  
    } else {
        printf("Error: Memory allocation failed!\n");
    }



    char str3[100];     //lowercase
    printf("Enter a string to convert to lowercase: ");
    fgets(str3, sizeof(str3), stdin);  
    str3[strcspn(str3, "\n")] = '\0';  
    char* lowercase_str = to_lowercase(str3);

    if (lowercase_str != NULL) {
        printf("Lowercase string: %s\n", lowercase_str);  
        free(lowercase_str);  
    } else {
        printf("Error: Memory allocation failed!\n");
    }



    char str4[100], sub4[50];       //find substring
    printf("Enter the main string to find the substring of: ");
    fgets(str4, sizeof(str4), stdin);
    str4[strcspn(str4, "\n")] = '\0';
    printf("Enter the substring to search: ");
    fgets(sub4, sizeof(sub4), stdin);
    sub4[strcspn(sub4, "\n")] = '\0';

    int index = substring_search(str4, sub4);
    if (index != -1) {
        printf("Substring found at index: %d\n", index);
    } else {
        printf("Substring not found.\n");
    }



    char str5[100];     //count vowels
    printf("Enter a string to count the vowels: ");
    fgets(str5, sizeof(str5), stdin);
    str5[strcspn(str5, "\n")] = '\0'; 
    int vowel_count = count_number_of_vowels(str5);
    printf("Number of vowels: %d\n", vowel_count);



    char str6[100];     //count consonants
    printf("Enter a string to count the consonants: ");
    fgets(str6, sizeof(str6), stdin);
    str6[strcspn(str6, "\n")] = '\0';  
    int consonant_count = count_number_of_consonants(str6);
    printf("Number of consonants: %d\n", consonant_count);



    char str7[100];     //count words
    printf("Enter a string to count words: ");
    fgets(str7, sizeof(str7), stdin);
    str7[strcspn(str7, "\n")] = '\0';  
    int word_count = count_number_of_words(str7);
    printf("Number of words: %d\n", word_count);



    char str8[200];     //count sentences
    printf("Enter a string to count sentences (use proper grammar): ");
    fgets(str8, sizeof(str8), stdin);
    str8[strcspn(str8, "\n")] = '\0'; 
    int sentence_count = count_number_of_sentences(str8);
    printf("Number of sentences: %d\n", sentence_count);



    char str9[200], sub9[100];      //count occurences
    printf("Enter the main string: ");
    fgets(str9, sizeof(str9), stdin);
    str9[strcspn(str9, "\n")] = '\0';  
    printf("Enter the substring: ");
    fgets(sub9, sizeof(sub9), stdin);
    sub9[strcspn(sub9, "\n")] = '\0';  
    int occurrences = count_number_of_occurrences(str9, sub9);
    printf("Number of occurrences: %d\n", occurrences);



    char ip_address[20];        //valid IP address
    printf("Enter an IP address: ");
    fgets(ip_address, sizeof(ip_address), stdin);
    ip_address[strcspn(ip_address, "\n")] = '\0'; 

    if (is_valid_ip_address(ip_address)) {
        printf("The IP address is valid.\n");
    } else {
        printf("The IP address is not valid.\n");
    }


    return 0;
}

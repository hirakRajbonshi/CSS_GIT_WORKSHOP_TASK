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
        c = tolower(c);  

        if ((c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            count++;
        }
    }

    return count;
}

int count_number_of_words(const char* str) {
    if (str == NULL) return 0;

    int count = 0;
    int in_word = 0; 

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) {
            if (!in_word) {
                count++; 
                in_word = 1;  
            }
        } else {
            in_word = 0; 
        }
    }

    return count;
}

int count_number_of_sentences(const char* str) {
    if (str == NULL) return 0;

    int count = 0;
    int in_sentence = 0;  

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            count++; 
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
//Palindrome
int is_palindrome(const char* str) {
    if (str == NULL) {
        return 0;
    }
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        while (left < right && !isalnum((unsigned char)str[left])) {
            left++;
        }
        while (left < right && !isalnum((unsigned char)str[right])) {
            right--;
        }
        if (tolower((unsigned char)str[left]) != tolower((unsigned char)str[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
//Anagram
int is_anagram(const char* str1, const char* str2){
    if (strlen(str1) != strlen(str2)) {
        return 0; 
    }
    int freq[256] = {0}; 
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)tolower(str1[i])]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)tolower(str2[i])]--;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }
    return 1; 
}
//Pangram
int is_pangram(const char* str){
    int alphabet[26] = {0}; 
    int index;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            index = tolower(str[i]) - 'a'; 
            alphabet[index] = 1; 
        }
    }
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            return 0; 
    }
    return 1;
}
}
//Isogram
int is_isogram(const char* str){
    int alphabet[26] = {0}; 
    int index;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            index = tolower(str[i]) - 'a'; 
            if (alphabet[index] == 1) {
                return 0; 
            }
            alphabet[index] = 1; 
        }
    }
    return 1;
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
//Valid Date
int is_valid_date(const char* str){
    if (str == NULL || strlen(str) != 10) {
        return 0; }
    if (!isdigit(str[0]) || !isdigit(str[1]) || str[2] != '-' || 
        !isdigit(str[3]) || !isdigit(str[4]) || str[5] != '-' ||
        !isdigit(str[6]) || !isdigit(str[7]) || !isdigit(str[8]) || !isdigit(str[9])) {
        return 0;
    }
    int day = (str[0] - '0') * 10 + (str[1] - '0');
    int month = (str[3] - '0') * 10 + (str[4] - '0');
    int year = (str[6] - '0') * 1000 + (str[7] - '0') * 100 + (str[8] - '0') * 10 + (str[9] - '0');
    if (month < 1 || month > 12) {
        return 0; 
    }
    if (day < 1 || day > 31) {
        return 0; }
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[1] = 29; 
    }
    if (day > days_in_month[month - 1]) {
        return 0; 
    }
    return 1;
}
//Valid Email
int is_valid_email(const char* str) {
    if (str == NULL || *str == '\0') {
        return 0;
   }
    int at_count = 0;
    const char *at_pos = NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == '@') {
            at_count++;
            at_pos = &str[i];
        } 
        else if (!isalnum(c) && c != '-' && c != '_' && c != '.') {
            return 0;
        }
    }
    if (at_count != 1) {
        return 0;
    }
    if (at_pos == str) {
        return 0;
    }
    if (strchr(at_pos + 1, '.') == NULL) {
        return 0;
    }
    return 1;
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

    //palindrome
    printf("Give one word for palindrome: ");
    char word[100];
    scanf("%s", word);
    if (is_palindrome(word)==1)
    {
        printf("YES, it is a palindrome\n");
    }
    else{printf("NO, it isn't a palindrome\n");}
    //anagram
    printf("Give two words for anagram: ");
    char word1[100], word2[100];
    scanf("%s%s", word1, word2);
    if (is_anagram(word1, word2)==1)
    {
        printf("YES, it is a anagram\n");
    }
    else{printf("NO, it isn't a anagram\n");}
    //pangram
    printf("Give one word for pangram: ");
    char word3[200];
    scanf("%s", word3);
    if (is_pangram(word3)==1)
    {
        printf("YES, it is a pangram\n");
    }
    else{printf("NO, it isn't a pangram\n");}
    //isogram
    printf("Give one word for isogram: ");
    char word4[100];
    scanf("%s", word4);
    if (is_isogram(word4)==1)
    {
        printf("YES, it is a isogram\n");
    }
    else{printf("NO, it isn't a isogram\n");}
    

    char ip_address[20];    //valid IP address
    printf("Enter an IP address: ");
    fgets(ip_address, sizeof(ip_address), stdin);
    ip_address[strcspn(ip_address, "\n")] = '\0';  
    while(getchar() != '\n');  

    if (is_valid_ip_address(ip_address)) {
        printf("The IP address is valid.\n");
    } else {
        printf("The IP address is not valid.\n");
    }
    
    //valid email
    printf("Enter an email: ");
    char email[100];
    scanf("%s", email);
    if (is_valid_email(email) == 1) {
        printf("\"%s\" is a valid email.\n", email);
    } 
    else {
        printf("\"%s\" is NOT a valid email.\n", email);
    }

    //valid date
    printf("Enter a date seperated by - : ");
    char test_date[100];
    scanf("%s", test_date);
    if (is_valid_date(test_date)) {
            printf("\"%s\" is a valid date.\n", test_date);
    } 
    else {
            printf("\"%s\" is NOT a valid date.\n", test_date);
        }

    return 0;
}

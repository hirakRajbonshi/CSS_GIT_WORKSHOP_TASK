#include "include/utils.h"
#include <stdio.h>


int main() {
    const char* test1 = "madam";
    printf("%s is %s palindrome\n", test1, is_palindrome(test1) ? "a" : "not a");
    const char* test2 = "listen";
    const char* test3 = "silent";
    printf("\"%s\" and \"%s\" are %s anagrams\n", test2, test3, is_anagram(test2, test3) ? "" : "not");
    const char* test4 = "The quick brown fox jumps over the lazy dog";
    printf("\"%s\" is %s a pangram\n", test4, is_pangram(test4) ? "" : "not");
    const char* test5 = "Machine";
    printf("\"%s\" is %s an isogram\n", test5, is_isogram(test5) ? "" : "not");
    const char* test6 = "192.168.1.1";
     printf("\"%s\" is %s a valid IP address\n", test6, is_valid_ip_address(test6) ? "" : "not");
     const char* test7 = "user@example.com";
     printf("\"%s\" is %s a valid email\n", test7, is_valid_email(test7) ? "" : "not");
     const char* test8 = "31-04-2023";
     printf("\"%s\" is %s a valid date\n", test8, is_valid_date(test8) ? "" : "not");

    return 0;
}

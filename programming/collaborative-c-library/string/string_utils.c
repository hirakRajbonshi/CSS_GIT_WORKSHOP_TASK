#include "string_utils.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    const char* str = "Hello, World!";
    char* reversed = reverse_string(str);
    
    if (reversed) {
        printf("Original: %s\n", str);
        printf("Reversed: %s\n", reversed);
        free(reversed); // Free allocated memory
    } else {
        printf("Memory allocation failed!\n");
    }

    return 0;
}

int main() {
    const char* str = "Hello, World!";
    char* upperStr = to_uppercase(str);

    if (upperStr) {
        printf("Original: %s\n", str);
        printf("Uppercase: %s\n", upperStr);
        free(upperStr); 
    } else {
        printf("Memory allocation failed!\n");
    }

    return 0;
}

int main() {
    const char* str = "Hello, World!";
    char* lowerStr = to_lowercase(str);

    if (lowerStr) {
        printf("Original: %s\n", str);
        printf("lowercase: %s\n", lowerStr);
        free(lowerStr); 
    } else {
        printf("Memory allocation failed!\n");
    }

    return 0;
}

int main() {
    const char* testStr = "Hello, World!";
    int vowelCount = count_number_of_vowels(testStr);

    printf("The number of vowels in \"%s\" is: %d\n", testStr, vowelCount);
    return 0;
}

int main() {
    const char* testStr = "Hello, World!";
    int consonantCount = count_number_of_consonants(testStr);

    printf("The number of consonants in \"%s\" is: %d\n", testStr, consonantCount);
    return 0;
}

int main() {
    const char* testStr = "madam";
    is_palindrome(testStr);

    return 0;
}
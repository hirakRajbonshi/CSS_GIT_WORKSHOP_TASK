#include "include/utils.h"
#include <stdio.h>


int main() {

   printf("Hello reversed is %s\n",reverse_string("Hello"));
    printf("shivam in uppercase is %s\n",to_uppercase("shivam"));
    printf("SHIVAM in lower case is %s\n",to_lowercase("SHIVAM"));
    if(substring_search("feather","lath")!=-1)
        {printf("lath is a substing of feather\n");}
    else{
        printf("lath is not a substing of feather\n");}
    printf("The number of vowels in education is %d\n",count_number_of_vowels("education"));
    printf("The number of consonant in university is %d\n",count_number_of_consonants("university"));
    printf("The number of words in 'Education is a powerful weapon' is:  %d\n",count_number_of_words("Education is a powerful weapon"));
    printf("The number of sentence in 'He walked.She did too!' is: %d\n",count_number_of_sentences("He walked.She walked too!"));
    printf("The no. of occurances of 'the' in the statement 'She went to the store and bought the book on the shelf' is: %d",count_number_of_occurrences("She went to the store and bought the book on the shelf","the"));
    
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

    int n;
    printf("Factorial of 5: %d\n", factorial(5));
    printf("The gcd of 24 and 96 is: %d\n", gcd(24,96));
    printf("The LCM of 90 and 40 is: %d\n",lcm(90,40));
    printf("2 raised to the power 6 is: %lf\n",power(2.0,6));
    printf("The square root of 31 is: %lf\n",square_root(31.0));
    printf("The cube root of 36 is: %lf\n",cube_root(36.0));
    printf("Enter the value of n to find the nth root of 46: ");

    printf("The area of circle with radius 7.2 is %lf\n",area_circle(7.2));
    printf("The area of  triangle with co-ordinates (1,0),(3.3,-8.4),(0,5) is: %lf\n",triangle_area(1.0,0.0,3.3,-8.4,0,5));
    printf("The perimeter of triangle with co-ordinates (1,0),(3.3,-8.4),(0,5) is: %lf\n",perimeter_triangle(1.0,0.0,3.3,-8.4,0,5));
     scanf("%d",&n);
    printf("The %dth root of 46 is %lf",n,nth_root(46.0,n));
    return 0;
}

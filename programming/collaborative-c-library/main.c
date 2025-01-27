#include "include/utils.h"
#include "geometry_utils.h"
#include "string_utils.h"
#include "math_utils.h"
#include<stdio.h>
#define PI 3.14159
#include<math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "math_utils.h"
#include <math.h>

int main(){
    printf("The area of circle is %f.\n", area_circle(1));
    printf("The area of rectangle is %f.\n", area_rectangle(1, 2));
    printf("The perimeter of circle is %f.\n", perimeter_circle(1));
    printf("The perimeter of rctangle is %f.\n", perimeter_rectangle(1, 2));
    printf("The volume of cylinder is %f.\n",volume_cylinder(1,2));
    printf("The volume of sphere is %f.\n",volume_sphere(1));
    printf("The volume of cube is %f.\n",volume_cube(1));
    printf("The volume of cone is %f.\n",volume_cone(1, 2));
    printf("The volume of pyramid is %f.\n",volume_pyramid(1 , 2));
    printf("The surface area of cylinder is %f.\n",surface_area_cylinder(1, 2));
    printf("The surface area of sphere is %f.\n",surface_area_sphere(1));
    printf("The surface area of cube is %f.\n",surface_area_cube(1));
    printf("The surface area of cone is %f.\n",surface_area_cone(1, 2));
    printf("The surface area of pyramid is %f.\n",surface_area_pyramid(1, 2));
    printf("The distance in 2D is %f.\n",distance_2d(1, 2 , 3, 4));
    printf("The distance in 3D is %f.\n",distance_3d(1, 2 , 3 , 4 , 5 , 6));
    printf("The slope is %f.\n",slope(1, 2, 3, 4));
    printf("The midpoint(x) is %f.\n",midpoint_x(1, 2));
    printf("The midpoint(y) is %f.\n",midpoint_y(1, 2));
    printf("The centroid(x) is %f.\n",centroid_x(1, 2, 3));
    printf("The centroid(y) is %f.\n",centroid_y(1, 2, 3));
    printf("The area of the triangle is %f.\n",triangle_area(1, 1, 3, 1, 3, 3));
    printf("The perimeter of the triangle is %f.\n",perimeter_triangle(1, 1, 3, 1, 3, 3));

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

 int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is: %d\n", num, factorial(num));

    int a, b;
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
    
    printf("Enter two numbers to find their LCM: ");
    scanf("%d %d", &a, &b);
    printf("LCM of %d and %d is: %d\n", a, b, lcm(a, b));

    double base;
    int exp;
    printf("Enter base and exponent for power calculation: ");
    scanf("%lf %d", &base, &exp);
    printf("%.2f raised to the power of %d is: %.2f\n", base, exp, power(base, exp));
    
    printf("Enter a number for square root and cube root calculation: ");
    scanf("%lf", &base);

    double sqrt_result = square_root(base);
    double cbrt_result = cube_root(base);

    printf("Square root of %.2f is: %.6f\n", base, sqrt_result);
    printf("Cube root of %.2f is: %.6f\n", base, cbrt_result);

    int n1;
    printf("Enter the value of n (root): ");
    scanf("%d", &n1);

    if (n1 <= 0) {
        printf("The value of n must be greater than 0.\n");
    } else if (base < 0 && n1 % 2 == 0) {
        printf("For even roots, the base must be non-negative.\n");
    } else {
        double result = nth_root(base, n1);
        printf("The %.d-th root of %.2lf is %.5lf\n", n1, base, result);
    }

    return 0;
}

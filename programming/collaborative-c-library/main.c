#include "include/utils.h"
#include <stdio.h>


int main() {
    int xyz;
    printf("\n\n******section box*******\n");
    printf("maths    : 1\n");
    printf("geometry : 2\n");
    printf("string   : 3\n");
    printf("************************\n");
    printf("enter the section u want to view  or press 0 to end : ");
    scanf("%d",&xyz);
    if(xyz==2)
    {
    printf("The area of circle with radius 7.2 is %lf\n",area_circle(7.2));
    printf("Area of rectangle having length 8 and breadth 6 is:%lf\n",area_rectangle(8.0,6.0));
    printf("Perimeter of circle having radius 14 is:%lf\n",perimeter_circle(14.0) );
    printf("Perimeter of rectangle having length 10 and breadth 9 is:%lf\n",perimeter_rectangle(10,9));
    printf("Volume of cylinder having radius 7 and height 14 is:%lf\n",volume_cylinder(7,14));
    printf("Volume of sphere having radius 28 is:%lf\n",volume_sphere(28));
    printf("Volume of cube having side 17 is:%lf\n",volume_cube(17));
    printf("Volume of cone having radius 11 and height 23 is:%lf\n",volume_cone(11,13));
    printf("Volume of pyramid having side 15 and height 27 is:%lf\n",volume_pyramid(15,27));
    printf("Surface area of cylinder having radius 8 and height 19 is:%lf\n",surface_area_cylinder(8,19));
    printf("Surface area of sphere with radius 5 :%0.2f\n", surface_area_sphere(5));
    printf("Surface area of cube with side 2 :%0.2f\n",surface_area_cube(2));
    printf("Surface area of cone with radius 2 and slant height 5 :%0.2f\n",surface_area_cone(2,5));
    printf("Surface area of pyramid with base perimeter 2 and slant height 5 :%0.2f\n",surface_area_pyramid(2,5));
    printf("Distance between points (0,0) and (4,3) :%0.2f\n",distance_2d(0,0,4,3));
    printf("Distance between points (0,0,0) and (1,1,1) :%0.2f\n",distance_3d(0,0,0,1,1,1));
    printf("Slope of line through (0,0) and (1,1): %f\n",slope(0,0,1,1));
    printf("Midpoint's x coordinate of line joining (0,0) and (1,1): %.2f\n",midpoint_x(0,1) );
    printf("Midpoint's y coordinate of line joining (0,0) and (1,1): %.2f\n",midpoint_y(0,1) );
    printf("Centroid of triangle formed by (0,0) ,(1,2)and (2,0) x coordinate : %.2f\n", centroid_x(0,1,2));
    printf("Centroid of triangle formed by (0,0) ,(1,2)and (2,0) y coordinate : %.2f\n", centroid_y(0,2,0));
    printf("The area of  triangle with co-ordinates (1,0),(3.3,-8.4),(0,5) is: %lf\n",triangle_area(1.0,0.0,3.3,-8.4,0,5));
    printf("The perimeter of triangle with co-ordinates (1,0),(3.3,-8.4),(0,5) is: %lf\n",perimeter_triangle(1.0,0.0,3.3,-8.4,0,5));
    }

  if(xyz==3)
  {
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
    printf("The no. of occurances of 'the' in the statement 'She went to the store and bought the book on the shelf' is: %d\n",count_number_of_occurrences("She went to the store and bought the book on the shelf","the"));
   
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
    
  }
  if(xyz==1)
  {

    int n;
    printf("Factorial of 5: %d\n", factorial(5));
    printf("The gcd of 24 and 96 is: %d\n", gcd(24,96));
    printf("The LCM of 90 and 40 is: %d\n",lcm(90,40));
    printf("2 raised to the power 6 is: %lf\n",power(2.0,6));
    printf("The square root of 31 is: %lf\n",square_root(31.0));
    printf("The cube root of 36 is: %lf\n",cube_root(36.0));
    printf("Enter the value of n to find the nth root of 46: ");
    scanf("%d",&n);
    printf("The %dth root of 46 is %lf",n,nth_root(46.0,n));
     
  }
    return 0;
}

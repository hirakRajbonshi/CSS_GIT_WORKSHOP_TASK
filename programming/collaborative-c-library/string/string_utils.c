#include "string_utils.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

// Function to reverse the string
char *reverse_string(const char *str)
{
  if (str == NULL)
  {
    return NULL;
  }
  int length = strlen(str);
  char *reversed = (char *)malloc(length + 1);
  for (int i = 0; i < length; ++i)
  {
    reversed[i] = str[length - 1 - i];
  }

  reversed[length] = '\0';

  return reversed;
}

// Function to convert a string to lowercase
void lowerCase(char str[])
{
  int i;
  int k = strlen(str);
  for (i = 0; i < k; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = str[i] + 32; // Convert uppercase to lowercase
    }
  }
}

// Function to convert a string to uppercase
void upperCase(char str[])
{
  int i;
  int k = strlen(str);
  for (i = 0; i < k; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 32; // Convert Lowercase to Uppercase
    }
  }
}

// Function to detect substring
char *subString(const char *str, int start, int len)
{

  char *substr = (char *)malloc((len + 1) * sizeof(char));

  if (substr == NULL)
  {
    return NULL;
  }

  for (int i = 0; i < len; i++)
  {
    substr[i] = str[start + i];
  }

  substr[len] = '\0';

  return substr;
}

// Function to count vowels
int countVowels(const char *str)
{
  int count = 0;

  // Iterate through the string
  while (*str)
  {
    char ch = tolower((unsigned char)*str); // Convert character to lowercase
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
      count++;
    }
    str++;
  }

  return count;
}

// Function to count consonants
int countConsonants(const char *str)
{
  int count = 0;

  while (*str)
  {
    char ch = tolower((unsigned char)*str); // Convert character to lowercase

    if ((ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
    {
      count++;
    }
    str++;
  }

  return count;
}

// Function to count number of words

int countWords(const char *str)
{
  int count = 0;
  int inWord = 0;

  while (*str)
  {
    if (isspace((unsigned char)*str))
    {

      inWord = 0;
    }
    else
    {

      if (!inWord)
      {
        count++;
        inWord = 1;
      }
    }
    str++;
  }

  return count;
}

// Function to count sentence
int count_number_of_sentences(const char *str)
{
  int count = 0;
  int length = strlen(str);

  for (int i = 0; i < length; i++)
  {

    if (str[i] == '.' || str[i] == '!' || str[i] == '?')
    {
      count++;
    }
  }

  return count;
}

// Function to count occurence
int count_number_of_occurrences(const char *str, const char *sub)
{
  int count = 0;
  const char *temp = str;

  size_t sub_len = strlen(sub);

  if (sub_len == 0)
  {
    return 0;
  }

  while ((temp = strstr(temp, sub)) != NULL)
  {
    count++;
    temp += sub_len;
  }

  return count;
}

// Detect Palindrome
int is_palindrome(const char *str)
{
  int l = strlen(str);
  for (int i = 0, j = l - 1; i < j; i++, j--)
  {
    if (str[i] != str[j])
    {
      return 0;
    }
  }
  return 1;
}

// Detect Anagram
int is_anagram(const char *str1, const char *str2)
{
  int count[26] = {0};

  for (int i = 0; str1[i] != '\0'; i++)
  {
    count[tolower(str1[i]) - 'a']++;
  }

  for (int i = 0; str2[i] != '\0'; i++)
  {
    count[tolower(str2[i]) - 'a']--;
  }

  for (int i = 0; i < 26; i++)
  {
    if (count[i] != 0)
    {
      return 0;
    }
  }

  return 1;
}

// Detect Valid Date
int is_valid_date(const char *str)
{
  int day, month, year;

  if (sscanf(str, "%2d-%2d-%4d", &day, &month, &year) != 3)
  {
    return 0;
  }

  if (year < 1)
    return 0;

  if (month < 1 || month > 12)
    return 0;

  int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
  {
    daysInMonth[1] = 29;
  }

  if (day < 1 || day > daysInMonth[month - 1])
    return 0;

  return 1;
}
// Detect Valid Email
int is_valid_email(const char *str)
{
  int l = strlen(str);
  for (int i = 0; i < l; i++)
  {
    if (str[i] == '@' && str[i + 6] == '.' && l > 12)
    {
      return 1;
    }
  }
  return 0;
}
// Detect Valid IP address
int is_valid_ip_address(const char *str)
{
  int l = strlen(str), count = 0;
  for (int i = 0; i < l; i++)
  {

    if (str[i] == '.')
    {
      count++;
    }
  }
  if (count == 3)
  {
    return 1;
  }
  return 0;
}

int is_isogram(const char *str)
{
  int charCount[26] = {0};

  for (int i = 0; str[i] != '\0'; i++)
  {

    int index = tolower(str[i]) - 'a';
    charCount[index]++;
    if (charCount[index] > 1)
    {
      return 0;
    }
  }
  return 1;
}

int is_pangram(const char *str)
{
  int alphabet[26] = {0};
  int unique_count = 0;

  for (int i = 0; str[i] != '\0'; i++)
  {

    int index = tolower(str[i]) - 'a';
    if (alphabet[index] == 0)
    {
      alphabet[index] = 1;
      unique_count++;
    }
  }

  if (unique_count == 26)
    return 1;
  else
    return 0;
}

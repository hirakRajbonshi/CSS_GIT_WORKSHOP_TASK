#ifndef STRING_UTILS_H
#define STRING_UTILS_H

char* reverse_string(const char* str)
{
   int len = strlen(str);
   char* rev = (char*) malloc(len + 1);
   strcpy(rev,str);
   int i=0,j=len-1;
   while(i<j)
   {
      char t=rev[i];
      rev[i] = rev[j];
      rev[j] = t;
      i++;
      j--;
   }
return rev;
}

char* to_uppercase(const char* str)
{
    int len = strlen(str);
  
       char* new = (char*) malloc(len + 1);
         strcpy(new,str);

      for(int i=0;i<=len-1;i++){
        new[i] = toupper(str[i]);
        
    }
    return new;
}

char* to_lowercase(const char* str)
{
    int len = strlen(str);
  
       char* new = (char*) malloc(len + 1);
         strcpy(new,str);

      for(int i=0;i<=len-1;i++){
        new[i] = tolower(str[i]);
        
    }
    return new;

}


int substring_search(const char* str, const char* sub);


int count_number_of_vowels(const char* str)
{
    int len = strlen(str);
  
        int count = 0 ;

         for(int i=0;i<=len -1;i++)
         {
            char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
         }
return count;
}

int count_number_of_consonants(const char* str)
{
     int len = strlen(str);
  
        int count = 0 ;

         for(int i=0;i<=len -1;i++)
         {
            char ch = str[i];
        if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
            count++;
         }
return count;
}

int count_number_of_words(const char* str);
int count_number_of_sentences(const char* str);
int count_number_of_occurrences(const char* str, const char* sub);

int is_palindrome(const char* str) {
    int len = strlen(str);
    int i = 0, j = len - 1;
    while (i < j)
     {
        if (str[i] != str[j]) {
            printf("This is not a palindrome\n");
            return 0; 
        }
        i++;
        j--;
    }
    printf("This is a palindrome\n");
    return 1; 
}


int is_anagram(const char* str1, const char* str2);

int is_pangram(const char* str);

int is_isogram(const char* str);

int is_valid_ip_address(const char* str);

int is_valid_email(const char* str);

int is_valid_date(const char* str);

#endif

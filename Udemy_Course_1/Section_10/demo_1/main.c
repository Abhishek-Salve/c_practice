#include <stdio.h>
#include <stdbool.h>

int string_length(const char str_array[]);
void string_compare(const char str_1[], const char str_2[], char str_f[]);
bool string_equals(const char str_1[], const char str_2[]);


int main()
{
    int string_len = 0;
    const char string_1[] = "tell me the truth, ";
    const char string_2[] = "this is the end";
    char result_concat[100];
    
    const char equal_string_1[] = "mellow";
    const char equal_string_2[] = "mellow";
    bool is_equals;
    
    const char string_3[] = "This is a message, what else could it be!";
    printf("%s\n", string_3);
    
    string_len = string_length(string_3);
    printf("string length is : %d\n", string_len);
    
    string_compare(string_1, string_2, result_concat);
    printf("concatenated string: %s\n", result_concat);    
    
    is_equals = string_equals(equal_string_1, equal_string_2);
    printf("is_equals : %i\n", is_equals);
    
    return 0;
}


int string_length(const char str_array[])
{
    int count = 0;
    while (str_array[count] != '\0')
    {
        count++;        
    }
    return count;
}


void string_compare(const char str_1[], const char str_2[], char str_f[])
{
    int count_1 = 0;
    int count_2 = 0;
    
    while(str_1[count_1] != '\0') 
    {
        str_f[count_1] = str_1[count_1];
        count_1++;        
    }
    
    while(str_2[count_2] != '\0') 
    {
        str_f[count_1 + count_2] = str_2[count_2];
        count_2++;
    }
        
    str_f[count_1 + count_2 + 1] = '\0';
}


bool string_equals(const char str_1[], const char str_2[])
{
    int count = 0;
    bool equal = true;
    
    while(str_1[count] != '\0')
    {
        if (str_1[count] != str_2[count])
        {
            equal = false;
        }
        count++;
    }
    
    if (str_1[count] == '\0' && str_2[count] != '\0')
        equal = false;
        
    return equal;
}
// Pointer Arithmetic

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int x = 0;
int string_length_self(char *const string);
int string_length_auth(char *const string);
 
 
int main()
{
//    int *ptr = &x;
//    printf("%p\n", ptr);
//    x++;
//    printf("%p\n ", ptr);

//    char *str = "hello, world\n";
////    char *strc = "good morning\n";
//    char strc[] = "good morning\n";
//    strcpy(strc, str);
//    printf("%s\n", strc);    

//    int len = 0;
//    char string_1[100] = "good morning, you human beings";
//    printf("original string = %s\n", string_1);
//    
//    len = string_length_self(string_1);
//    printf("string length = %d\n", len);
//    
//    len = string_length_auth(string_1);
//    printf("string length = %d\n", len);
//    
//    len = string_length_auth("");
//    printf("string length = %d\n", len);
//
//    len = string_length_auth("sdf");
//    printf("string length = %d\n", len);


//    char *str = NULL;
//    
//    str = (char *) malloc(15 * sizeof(char));
//    if (!str)
//    {
//        printf("insufficient memory");
//        exit(1);
//    }
//
//    strcpy(str, "hello");
//    printf("string = %s, address = %p \n", str, str);
//
//    str = (char *) realloc(str, 25);
//    if (!str)
//    {
//        printf("insufficient memory");
//        exit(1);
//    }
//
//    strcat(str, " world");
//    printf("string = %s, address = %p \n", str, str);
//    
//    
//    free(str);
//    str = NULL;
//    printf("string = %s, address = %p \n", str, str);
    
    

    // challenge
    char *str = NULL;
    printf("string = %s \n", str);
    
    int c_num;
    printf("how many chars for string : ");
    scanf("%d", &c_num);
    printf("user input = %d \n", c_num);
    
//    fgets(str, c_num, stdin);
//    str = "hello";
//    scanf("%s", str);
//    printf("string = %s \n", str);
//    
//    while(!str)
//    {
//        printf("%s", str);
//        str++;
//    }

    str = (char *) malloc(c_num * sizeof(char));
    if (!str)
    {
        printf("Insufficient memory : 1\n");
        exit(1);
    }
    
    scanf(" ");
//    scanf("%s", str);
    gets(str);
    printf("string = %s \n", str);
    
    
    free(str);
    str = NULL;
    printf("string = %s \n", str);
    
    return 0;
}


int string_length_self(char *const string)
{
    int length = 0;
    char *ptr = string;
    
//    printf("pointer input = %p\n", string);
//    printf("pointer func = %p\n", ptr);
    
    while(*ptr)
    {
        length += 1;
        ptr = ptr + 1;
    }
    
    return length;
}


int string_length_auth(char *const string)
{
    char *ptr = string;
    
//    printf("pointer input = %p\n", string);
//    printf("pointer func = %p\n", ptr);
    
    while(*ptr)
        ptr = ptr + 1;
    
    return (ptr-string);
}
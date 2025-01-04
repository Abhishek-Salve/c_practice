#include <stdio.h>
#include <string.h>

// Write a program the displays input string in reverse order 
// read input from keyboard
// need to use strlen() function

int main()
{
    char str_input_1[50];
    int str_length = 0;
    
    printf("Input a string to be reversed :\n");
    scanf("%s", str_input_1);
    printf("What you entered : %s\n", str_input_1);
    
    str_length = strlen(str_input_1);
    printf("string length for entered string is: %d\n", str_length);
    
    printf("reversed string is: ");
    for(int i = str_length; i >= 0; i--)
    {
//        printf("%d", i);
        printf("%c", str_input_1[i]);
    }
    printf("\n");
    
    return 0;
}

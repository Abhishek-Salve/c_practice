#include <stdio.h>

int main()
{
    printf("For \" you write\\\".\n");
    printf("The character \\0 is used to terminate\n");
    printf("Hello!\n");
    
    char word_1[14] = "Hello World!";
    char word_2[7] = "Hello!";
    
    printf("%s\n%s\n", word_1, word_2);
    
	return 0;
}

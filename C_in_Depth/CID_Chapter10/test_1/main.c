#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    //  print string, string element addresses
//    char str[] = "handicraft";
//    
//    for (int i=0; str[i]!='\0'; i++)
//    {
//        printf("%c \t", str[i]);
//        printf("%p \n", &str[i]);
//    }
    
    
    // print string chars using pointer
//    char str[] = "handicraft";
//    char *p = str;
//    
////    for (int i=0; p[i]!='\0'; i++)
////    {
////        printf("%c \t", *(p+i));
////        printf("%p \n", p+i);
////    }
//        
//    while(*p)
//    {
//        printf("%c \t", *p);
//        printf("%p \n", p);
//        p++;
//    }


    // printf and scanf a string
//    char str[20];
//    printf("Enter a text string : ");
//    scanf("%s", str);
//    printf("%s %s", str, "and rubber");


    // gets, puts
//    char str[40];
//    printf("Enter text : ");
//    gets(str);
//    printf("User has input : %s\n", str);
//    puts(str);
    

    // malloc for char pointer
//    char *ptr;
//    ptr = (char *) malloc(20);
//    printf("Enter string : ");
//    scanf("%s", ptr);
//    printf("User input string : %s \n", ptr);


    // print 2D string arrays
//    char arr[5][10] =   {
//                            "white",
//                            "red",
//                            "green",
//                            "yellow",
//                            "blue"
//                        };
//    
//    for (int i=0; i<5; i++)
//    {
//        printf("%s \t", arr[i]);
//        printf("%p \n", arr[i]);
//    }
    
    
    // program to sort strings using strcpy
    char temp[10];

    char arr[5][10] =   {
                            "white",
                            "red",
                            "green",
                            "yellow",
                            "blue"
                        };

    printf("before sorting \n");
    for (int i=0; i<5; i++)
        printf("%s \n", arr[i]);
    printf("\n");
    
    for(int i=0; i<5; i++)
        for(int j=i+1; j<5; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    
    
    printf("after sorting \n");
    for (int i=0; i<5; i++)
        printf("%s \n", arr[i]);
    
    
    
    return 0;
}

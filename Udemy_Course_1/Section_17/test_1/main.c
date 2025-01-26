#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
//    FILE *fptr = NULL;
//    char *filename = "my_file.txt";
//    fptr = fopen(filename, "r");
//    if (fptr == NULL)
//    {
//        printf("error opening the file \n");
//        exit(1);
//    }
//    
//    int ch;
//    char buffer[60];
//    int lines = 0;
//    int lines_2 = 0;
//    
//    while ((fgets(buffer, 60, fptr)) != NULL)
//    {
//        printf("%s", buffer);
//        lines++;
//    }
//    
//    rewind(fptr);
//    printf("\n\n");
//    
//    while((ch = fgetc(fptr)) != EOF)
//    {
//        printf("%c", ch);
//        if (ch == (int)'\n')
//            lines_2 ++;
//    }
//    
//    printf("\n\n");
//    printf("no. of lines in file = %d \n", lines);
//    printf("no. of lines in file = %d \n", ++lines_2);
//
//    fclose(fptr);
//    fptr = NULL;


    // fputc()
//    FILE *ptr = NULL;
//    char *filename = "fputc.txt";
//    
//    ptr = fopen(filename, "w");
//    if (ptr == NULL)
//    {
//        printf("error opening file \n");
//        exit(1);
//    }
//    
//    int ch;
//    
//    for (ch=33; ch<100; ch++)
//        fputc(ch, ptr);
//    
//    fclose(ptr);
//    ptr = NULL;
    

    // fputs
//    FILE *ptr = NULL;
//    char *filename = "fputs.txt";
//    
//    ptr = fopen(filename, "w");
//    if (ptr == NULL)
//    {
//        printf("error in opening file \n");
//        exit(1);
//    }
//    
//    fputs("Hello there\n", ptr);
//    fputs("How do you do ?\n", ptr);
//    
//    fclose(ptr);
//    ptr = NULL;


    // fprintf()
//    FILE *ptr = NULL;
//    char *filename = "fprintf.txt";
//    
//    ptr = fopen(filename, "w");
//    if (ptr == NULL)
//    {
//        printf("error in opening file \n");
//        exit(1);
//    }
//    
//    fprintf(ptr, "%s %s %s %s", "halt", "who", "goes", "there");
//
//    
//    fclose(ptr);
//    ptr = NULL;
    
    
    // lower to upper case
//    FILE *fptr;
//    char *filename = "lower.txt";
//    
//    fptr = fopen(filename, "r");
//    if (fptr == NULL)
//    {
//        printf("error handling code");
//        exit(1);
//    }
//    
//    
//    FILE *tptr;
//    char *filename_temp = "temp.txt";
//    tptr = fopen(filename_temp, "w");
//    if (tptr == NULL)
//    {
//        printf("error handling code");
//        exit(1);
//    }
//    
//    
//    int ch;
//    char check;
//    char temp_write;
//    int temp;
//    
//    while ( (ch = fgetc(fptr)) != EOF)
//    {
//        check = (char) ch;
//        temp_write = check;
//        
//        if (islower(check) != 0)
//            temp_write = ch - 32;
//        
//        temp = fputc(temp_write, tptr);        
//        printf("%c", temp);
//    }
//    
//    fclose(tptr);
//    fptr = NULL;
//    
//    fclose(fptr);
//    fptr = NULL;
//
//    remove(filename);
//    temp = rename(filename_temp, filename);
//    if (temp == 0)
//        printf("\nRenaming successful\n");


    // print file in reverse order
    FILE *pfile;
    char *filename = "reverse.txt";
    
    pfile = fopen(filename, "r");
    if (pfile == NULL)
    {
        printf("error opening file \n");
        exit(1);
    }
    
//    fputs("C for beginners", pfile);
    
    int pos;
//    int ch;
//    int counter
    
    printf("Current file position : %d \n", (int) ftell(pfile));
    fseek(pfile, 0, 2);
    pos = ftell(pfile);
    printf("Current file position : %d \n", pos);
//    fseek(pfile, pos-1, 2);
//    ch = fgetc(pfile);
//    printf("%c", ch);
    
    
//    while ((pos = ftell(pfile)) != 0)
//    {
//        fseek(pfile, pos, 0);
//        ch = fgetc(pfile);
//        printf("%c", ch);
//        pos = pos - 1;
//    }   

    for (int i=pos-1; i>=0; i--)
    {
        fseek(pfile, i, 0);
        printf("%c", fgetc(pfile));
//        printf("%d", i);
    }


    
    fclose(pfile);
    pfile = NULL;
        
        
    return 0;
}

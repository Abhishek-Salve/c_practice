#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student {
    char name[20];
    int rollno;
};

struct record {
    char name[20];
    int roll;
    float marks;
} student;


int main()
{
    // fputc()
//    FILE *fptr;
//    int ch;
//    fptr = fopen("fputc.txt", "w");
//    if (fptr == NULL)
//    {
//        printf("error in opening file \n");
//        exit(1);
//    }
//    
//    printf("Enter text : \n");
//    while((ch = getchar()) != EOF)
//        fputc(ch, fptr);
//    fclose(fptr);
    
    
    // fgetc()
//    FILE *fptr;
//    int ch;
//    fptr = fopen("fputc.txt", "r");
//    if (fptr == NULL)
//    {
//        printf("error in file opening \n");
//        exit(1);
//    }
//    
//    while((ch = fgetc(fptr)) != EOF)
//        printf("%c", ch);
//    
//    fclose(fptr);
    

    // fputs()
//    FILE *fp;
//    char str[80];
//    fp = fopen("fputs.txt", "w+");
//    if (fp == NULL)
//    {
//        printf("error in file opening \n");
//        exit(1);
//    }
//    
//    while(gets(str) != NULL)
//    {
//        strcat(str, "\n");
//        fputs(str, fp);
//    }
//    fclose(fp);
    

    // fputs
//    FILE *fp;
//    char str[80];
//    fp = fopen("fputs.txt", "r+");
//    if (fp == NULL)
//    {
//        printf("error in opening file \n");
//        exit(1);
//    }
//    
//    while (fgets(str, 80, fp) != NULL)
//        puts(str);
////        printf("%s", str);
//
//    fclose(fp);
    
    // fprintf 1
//    FILE *fp;
//    int age;
//    char name[20];
//    
//    fp = fopen("fprint_1.txt", "w");
//    if (fp == NULL)
//    {
//        printf("error opening file \n");
//        exit(1);
//    }
//    
//    printf("Enter name and age : ");
//    scanf("%s %d", name, &age);
//    printf("User input = %s, %d", name, age);
//    fprintf(fp, "User input is\nname=%s\nage=%d", name, age);
//
//    fclose(fp);



    // fprint 2
//    struct student stu;
//    
//    FILE *fp;
//    int i, n;
//    fp = fopen("fprintf_2.txt", "w");
//    if (fp == NULL)
//    {
//        printf("error opening the file \n");
//        exit(1);
//    }
//    
//    printf("Enter number of student record \n");
//    scanf("%d", &n);
//    for (i=0; i<n; i++)
//    {
//        printf("Enter name, rollno : ");
//        scanf("%s %d", stu.name, &stu.rollno);
//        fprintf(fp, "%s %d\n", stu.name, stu.rollno);
//    }
//    
//    fclose(fp);


    // fscanf()
//    struct student stu;
//    FILE *fp;
//    fp = fopen("fprintf_2.txt", "r");
//    if (fp == NULL)
//    {
//        printf("error opening the file \n");
//        exit(1);
//    }
//    
//    printf("NAME\tROLL_NO\n");
//
//    while(fscanf(fp, "%s %d", stu.name, &stu.rollno) != EOF)
//        printf("%s\t%d\n", stu.name, stu.rollno);
//
//    fclose(fp);


    // fwrite()
//    FILE *fp;
//    fp = fopen("fwrite.txt", "wb");
//    if (fp == NULL)
//    {
//        printf("error in opening file \n");
//        exit(1);
//    }
//    
//    int n;
//    printf("Enter number of records : ");
//    scanf("%d", &n);
//    
//    for (int i=0; i<n; i++)
//    {
//        printf("Record %d\n", i+1);
//        printf("Enter student name :");
//        scanf("%s", student.name);
//        printf("Enter student roll no :");
//        scanf("%d", &student.roll);
//        printf("Enter student marks :");
//        scanf("%f", &student.marks);
//        fwrite(&student, sizeof(student), 1, fp);
//    }
//    fclose(fp);


    // fread()
//    FILE *fp;
//    fp = fopen("fwrite.txt", "rb");
//    if (fp == NULL)
//    {
//        printf("error in opening file \n");
//        exit(1);
//    }
//    printf("NAME\tROLLNO\tMARKS\n");
//    while(fread(&student, sizeof(student), 1, fp) == 1)
//    {
//        printf("%s\t", student.name);
//        printf("%d\t", student.roll);
//        printf("%f\n", student.marks);
//    }
//    fclose(fp);


    // fseek()
//    FILE *fp;
//    fp = fopen("fwrite.txt", "rb");
//    if (fp == NULL)
//    {
//        printf("error opening file \n");
//        exit(1);
//    }
//    
//    int n;
//    printf("enter the record number to be read \n");
//    scanf("%d", &n);
//    fseek(fp, (n-1)*sizeof(student), 0);
//    fread(&student, sizeof(student), 1, fp);
//    
//    printf("NAME\tROLLNO\tMARKS\n");
//    printf("%s\t", student.name);
//    printf("%d\t", student.roll);
//    printf("%f\n", student.marks);
//    
//    fclose(fp);


    // ftell()
//    FILE *fp;
//    fp = fopen("fwrite.txt", "rb");
//    if (fp == NULL)
//    {
//        printf("error opening file \n");
//        exit(1);
//    }
//    printf("Position indicator in the beginning : %ld \n", ftell(fp));
////    printf("NAME\tROLLNO\tMARKS\n");
//    
//    while(fread(&student, sizeof(student), 1, fp) == 1)
//    {
//        printf("File position indicator : %ld \n", ftell(fp));
//        printf("%s\t", student.name);
//        printf("%d\t", student.roll);
//        printf("%f\n", student.marks);
//    }
//    printf("File position indicator : %ld \n", ftell(fp));
//    fclose(fp);


    // rewind()
//    FILE *fp;
//    fp = fopen("fwrite.txt", "rb+");
//    if (fp == NULL)
//    {
//        printf("error \n");
//        exit(1);
//    }
//    
//    printf("FPI : %ld \n", ftell(fp));
//    fseek(fp, 0, 2);
//    printf("FPI : %ld \n", ftell(fp));
//    rewind(fp);
//    printf("FPI : %ld \n", ftell(fp));
//    fclose(fp);
    
    
    return 0;
}

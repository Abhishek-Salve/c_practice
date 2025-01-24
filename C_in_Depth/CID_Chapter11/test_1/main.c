#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct student {
    char name[20];
    int rollno;
    float marks;
};


int main()
{
//    struct student stu1 = {"Mary", 25, 90};
//    struct student stu2, stu3;
//    
//    strcpy(stu2.name, "Mark");
//    stu2.rollno = 24;
//    stu2.marks = 92.0;
//    
//    printf("Enter name, rollno, marks for stu3 : ");
//    scanf("%s %d %f", stu3.name, &stu3.rollno, &stu3.marks);
//    printf("\n");
//    
//    printf("stu1 : %s, %d, %.2f \n", stu1.name, stu1.rollno, stu1.marks);
//    printf("stu2 : %s, %d, %.2f \n", stu2.name, stu2.rollno, stu2.marks);
//    printf("stu3 : %s, %d, %.2f \n", stu3.name, stu3.rollno, stu3.marks);
    
    
//    struct student stu1 = {"Mary", 25, 90};
//    struct student stu2;
//    
//    stu2 = stu1;
//    printf("stu1 : %s, %d, %.2f \n", stu1.name, stu1.rollno, stu1.marks);
//    printf("stu2 : %s, %d, %.2f \n", stu2.name, stu2.rollno, stu2.marks);
    

    // pointers to strucutres
    struct student stu = {"Mary", 25, 90};
    struct student *ptr;
    ptr = &stu;
    
    printf("%s \n", ptr->name);
    printf("%d \n", ptr->rollno);
    printf("%.2f \n", ptr->marks);
    
    printf("%s \n", (*ptr).name);
    printf("%d \n", (*ptr).rollno);
    printf("%.3f \n", (*ptr).marks);
    
    return 0;
}

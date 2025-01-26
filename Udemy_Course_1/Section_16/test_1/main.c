#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define SLEN 40


struct student {
    char name[20];
    int rollno;
    float marks;
};


struct namect {
    char *fname;
    char *lname;
    int letters;
};

struct item {
    char *item_name;
    int quanity;
    float price;
    float amount;
};


void get_info(struct namect *pst);
void read_item(struct item *ptr);
void print_item(struct item *ptr);


int main()
{
//    struct student student_1 = {"matthew", 22, 80.54};
//    printf("%s \n", student_1.name);
//    printf("%d \n", student_1.rollno);
//    printf("%.2f \n", student_1.marks);
//    
//    struct student student_2;
//    printf("Enter student info \n");
//    scanf("%s", student_2.name);
//    scanf("%d", &student_2.rollno);
//    scanf("%f", &student_2.marks);
//    
//    printf("%s \n", student_2.name);
//    printf("%d \n", student_2.rollno);
//    printf("%.2f \n", student_2.marks);


    // pointer as member
//    struct namect name, *ptr;
//    ptr = &name;
//    get_info(ptr);
//    
//    printf("%s\n", *ptr->fname);
//    printf("%s\n", *ptr->lname);
    

    // structures and functions
    
    
    // structure challenge
//    struct item new_item, *item_ptr;
//    item_ptr = &new_item;
//    read_item(item_ptr);
//    print_item(item_ptr);
//    
//    free(item_ptr->item_name);
    
    
    return 0;
}

void get_info(struct namect *pst)
{
    char temp[SLEN];
    
    printf("Enter first name : ");
//    scanf("%s", temp);
    gets(temp);
    pst->fname = (char *)malloc(strlen(temp)+1);
    strcpy(pst->fname, temp);
    
    printf("Enter last name : ");
//    scanf("%s", temp);
    gets(temp);
    pst->lname = (char *)malloc(strlen(temp)+1);
    strcpy(pst->lname, temp);
}

void read_item(struct item *ptr)
{
//    char item_name[20];
    printf("Enter item name : ");
    ptr->item_name = (char *)malloc(30 * sizeof(char));
    scanf("%s", ptr->item_name);
//    strcpy(ptr->item_name, item_name);
    
    int quantity;
    printf("Enter quantity : ");
    scanf("%d", &quantity);
    ptr->quanity = quantity;
    
    float price;
    printf("Enter price : ");
    scanf("%f", &price);
    ptr->price = price;
    
    ptr->amount = quantity * price;
}

void print_item(struct item *ptr)
{
    printf("%s\n", ptr->item_name);
    printf("%d\n", ptr->quanity);
    printf("%.2f\n", ptr->price);
    printf("%.2f\n", ptr->amount);
}
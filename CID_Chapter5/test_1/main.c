#include <stdio.h>

//int max_of_four(int a, int b, int c, int d);
void func_test (void);

//int max_of_four(int a, int b, int c, int d)
//{
//    if ((a > b) && (a > c) && (a > d))
//        return a;
//    else if ((b > a) && (b > c) && (b > d))
//        return b;
//    else if ((c > a) && (c > b) && (c > d))
//        return c;
//    else
//        return d;
//}

int main()
{
//    int year = 2005;
//    
//    if ( (year%4 == 0) && (year%100 != 0 || year%400 == 0) )
//        printf("leap year");
//    else
//        printf("not leap year");

//    char input_string[100];
//    printf("Hello World\n");
//    scanf("%s", input_string);
//    printf("%s\n", input_string);

//    char ch;
//    scanf("%c", &ch);
//    printf("%c\n", ch);
//    
//    char str_1[100];
//    scanf("%s", str_1);
//    printf("%s\n", str_1);
//    
//    char str_2[100];
//    scanf("\n");
//    scanf("%[^\n]%*c", str_2);
//    printf("%s\n", str_2);


//	int num1, num2;
//    float num3, num4;
//    
//    scanf("%d %d", &num1, &num2);
//    scanf("%f %f", &num3, &num4);
//    
//    printf("%d %d\n", (num1 + num2), (num1 - num2));
//    printf("%.1f %.1f\n", (num3 + num4), (num3 - num4));


//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    int ans = max_of_four(a, b, c, d);
//    printf("%d", ans);


//  valid date checker
//    int year, month, day;
//    int date_error = 0, is_leap = 0;
//    printf("Enter a date (dd/mm/yyyy): ");
//    scanf("%d/%d/%d", &day, &month, &year);
//    printf("day = %d, month = %d, year = %d\n", day, month, year);
//    
//    if ((year%4==0) && ((year%100!=0 || year%400==0)))
//        is_leap = 1;
//    
//    if (!(day >= 1 && day <=31 && 1 <= month && month <= 12 && year >=1850 && year <=2050))
//        date_error = 1;
//    else if ((month == 2 || month == 4 || month == 6 || month == 9 || month == 11) && day==31)
//        date_error = 1;
//    else if ((month==2 && is_leap==0 && day>28) || (month==2 && is_leap==1 && day>29))
//        date_error = 1;
//    else
//        date_error = 0;
//    
//    if (date_error == 1)
//        printf("Invalid date\n");
//    else
//        printf("Valid date\n");

// find date difference
// given date2 is after date1
// assume valid dates

//    int d1, m1, y1;
//    int d2, m2, y2;
//    
//    printf("Enter date 1 (dd/mm/yyyy) : ");
//    scanf("%d / %d / %d", &d1, &m1, &y1);
//    
//    printf("Enter date 2 (dd/mm/yyyy) : ");
//    scanf("%d / %d / %d", &d2, &m2, &y2);
//    
//    printf("Date 1 = %d/%d/%d\n", d1, m1, y1);
//    printf("Date 2 = %d/%d/%d\n", d2, m2, y2);
//        
//    int diff_d, diff_m, diff_y;
//    diff_y = y2-y1;
//    if (m2 > m1)
//        diff_m = m2-m1;
//    else
//        diff_m = 12-m2+m1;
//    
//    if (d2 > d1)
//        diff_d = d2-d1;
//    else
//        if (month)
    
//    russian pesant method 
//    int num1 = 19;
//    int num2 = 25;
//    int sum = 0;
//    
//    while (num1 > 0)
//    {
//        if (num1%2 != 0)
//            sum += num2;
//        
//        num1 /= 2;
//        num2 *= 2;
//    }        
//    printf("Product = %d", sum);

// currency calulcator    
//    int money = 748;
//    int notes = 0;
//    
//    switch (100)
//    {
//        case 100:
//            notes = money / 100;
//            printf("Notes of Rs.100 = %d\n", notes);
//            money %= 100;
//        case 50:
//            notes = money / 50;
//            printf("Notes of Rs.50 = %d\n", notes);
//            money %= 50;
//        case 10:
//            notes = money / 10;
//            printf("Notes of Rs.10 = %d\n", notes);
//            money %= 10;
//        default:
//            notes = money / 1;
//            printf("Notes of Rs.1 = %d\n", notes);
////            money %= 1;
//    }

// LCM, HCF of 2 numbers
//    int num1, num2;
//    printf("Enter 2 numbers :");
//    scanf("%d%d", &num1, &num2);
//    printf("User input numbers are : %d, %d\n", num1, num2);
//    
//    int x, y;
//    x = num1;
//    y = num2;
//    
//    while (x != y)
//        if (x<y)
//            x = x+num1;
//        else
//            y = y+num2;
//    printf("LCM of %d, %d is = %d\n", num1, num2, x);
//    
//    x = num1;
//    y = num2;
//    
//    while (x != y)
//        if (x>y)
//            x = x-y;
//        else
//            y = y-x;
//    printf("HCF of %d, %d is = %d\n", num1, num2, x);


//    Pyramid with stars 
//    int iter=5;
//    printf("Enter pyramid height :");
//    scanf("%d", &iter);
//    printf("\n");
    
//    bottom base - tilted
//    int i=0, j=0;
//    for (i=1; i<=iter; i++)
//    {
//        for (j=1; j<=i; j++)
//            printf("*");        
//        printf("\n");
//    }

//    top base - tilted
//    int i=0, j=0;
//    for (i=1; i<=iter; i++)
//    {
//        for (j=1; j<=iter+1-i; j++)
//            printf("*");        
//        printf("\n");
//    }            

//    int i=0, j=0;
//    for (i=1; i<=iter; i++)
//    {
//        for (j=1; j<=iter-i; j++)
//            printf(" ");
//        for (j=1; j<=2*i-1; j++)
//            printf("*"); 
//        printf("\n");
//    }             


//    diamond shape
//    int i=0, j=0;
//    int iter=5;
//    
//    for (i=1; i<=iter; i++)
//    {
//        for (j=1; j<=iter-i; j++)
//            printf(" ");
//        
//        for (j=1; j<=i; j++)
//            printf("*"); 
//        
//        for (j=1; j<=i-1; j++)
//            printf("*");
//            
//        printf("\n");
//    } 
//    iter--;
//    for (i=1; i<=iter; i++)
//    {
//        for (j=1; j<=i; j++)
//            printf(" ");
//        
//        for (j=1; j<=iter+1-i; j++)
//            printf("*"); 
//        
//        for (j=1; j<=iter-i; j++)
//            printf("*");
//            
//        printf("\n");
//    }  

//    int i = 10;
//    printf("%d %d %d %d %d", ++i, i, i--, i, i);
    
//    int var;
//    var = sum(2,2);
//    printf("%d", var);
    
    func_test();
    func_test();
    func_test();
    
    return 0;
}

//int sum(int a, int b)
//{
//    return (a+b);
//}

void func_test(void)
{
    int a = 10;
    static int b = 20;
//    b = 25;
    printf("%d, %d\n", a, b);
    a++;
    b++;
    
//    b = 25;
}
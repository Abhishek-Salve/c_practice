#include <stdio.h>
#include <math.h>

long int fact(int n);
long int sum_to_n(int n);
void display_1(int n);
void display_2(int n);
int series_sum(int a);
int add_num(int n);
void print_num1(int n);
void print_num2(int n);
void base_conversion(int n, int base);
float exponent_func(int a, int n);
//void prime_fact(int n, int a);
void prime_fact(int num);
int gcd(int a, int b);
void fibonacci(int a, int b, int terms);
int div_by_nine(int n);
int div_by_11(int n);


int main()
{
//    factorial recursion
//    int num = 0;
//    printf("Enter number for factorial : ");
//    scanf("%d", &num);
//    printf("User has entered = %d\n", num);
//    
//    printf("Result of %d! = %ld\n" , num, fact(num));
//    
//    printf("sizeof int = %zu\n", sizeof(int));
//    printf("sizeof long = %zu\n", sizeof(long));
//    printf("sizeof long int = %zu\n", sizeof(long int));
    
    
//    summation of 1 to n
//    int num = 0;
//    printf("Enter number for summ : ");
//    scanf("%d", &num);
//    printf("User has entered = %d\n", num);
//    
//    printf("Result of %d summation = %ld\n" , num, sum_to_n(num));

//    display nums from 1 to n
//    int num = 0;
//    printf("Enter number for display : ");
//    scanf("%d", &num);
//    printf("User has entered = %d\n", num);
//    
//    display_1(num);
//    printf("\n");
//    display_2(num);
    
//    sum of series
//    int terms = 0;
//    int sum_total = 0;
//    printf("Enter terms of series : ");
//    scanf("%d", &terms);
//    printf("User has entered = %d\n", terms);
//    
//    sum_total = series_sum(terms);
//    printf("%d\n", sum_total);


//    sum of digits
//    int num;
//    printf("Enter the number : ");
//    scanf("%d", &num);
//    printf("User input = %d\n", num);
//    
////    printf("%d\n", add_num(num));
//    print_num1(num);
//    printf("\n");
//    print_num2(num);

    
//    base conversion
//    int num;
//    printf("Enter the number : ");
//    scanf("%d", &num);
//    printf("User input = %d\n", num);
//    
//    base_conversion(num, 2);
//    printf("\n");
//    
//    base_conversion(num, 8);
//    printf("\n");
//    
//    base_conversion(num, 16);
//    printf("\n");
    
    
//    exponent of a number 
//    int a, n;
//    printf("Enter the number : ");
//    scanf("%d, %d", &a, &n);
//    printf("User input = %d, %d\n", a, n);
//    printf("%f\n", exponent_func(a, n));
    

//    prime factorization
//    int num;
//    printf("Enter the number : ");
//    scanf("%d", &num);
//    printf("User input = %d\n", num);
//
//    prime_fact(num);

//    GCD of 2 numbers
//    int a, b;
//    printf("Enter the number : ");
//    scanf("%d, %d", &a, &b);
//    printf("User input = %d, %d\n", a, b);
//    printf("%d\n", gcd(a, b));
    
    
//    fibonacci series
//    int num;
//    printf("Enter the number : ");
//    scanf("%d", &num);
//    printf("User input = %d\n", num);
////    printf("%d", fibonacci(num));
//    fibonacci(1, 1, num);
    
//    divisibility by 9 check
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("User input = %d\n", num);
    printf("div by 9 = %d\n", div_by_nine(num));
    printf("div by 11 = %d\n", div_by_11(num));
    
    return 0;
}

long int fact(int n)
{
    if (n == 0)
        return 1;
    return (n * fact(n-1));
}

long int sum_to_n(int n)
{
    if (n == 0)
        return 0;
    return (n + sum_to_n(n-1));
}

void display_1(int n)   // descending
{
    if (n==0)
        return;
    
    printf("%d ", n);
    display_1(n-1);
}

void display_2(int n)   // ascending
{
    if (n==0)
        return;
    
    display_2(n-1);
    printf("%d ", n);
}

int series_sum(int a)
{
    int sum;
    if (a==0)
        return 0;
    
    sum = a + series_sum(a-1);
    printf("%d ", a);
    return sum;
}

int add_num(int n)
{
    if (n/10 == 0)
        return n;
    
    return n%10 + add_num(n/10);    
}

void print_num1(int n)
{
    if (n/10 == 0)
    {
        printf("%d ", n);
        return;
    }
    printf("%d ", n%10);
    print_num1(n/10);
}

void print_num2(int n)
{
    if (n/10 == 0)
    {
        printf("%d ", n);
        return;
    }
    print_num2(n/10);
    printf("%d ", n%10);
}

void base_conversion(int n, int b)
{
    int rem = n%b;
    
    if (n == 0)
        return;
        
    base_conversion(n/b, b);
    
    if (rem < 10)
        printf("%d", rem);    
    else
        printf("%c", rem-10+'A');    
}

float exponent_func(int a, int n)
{
    if (n == 0)
        return 1;
    
    return (a * exponent_func(a, n-1));
}

//void prime_fact(int n, int a)
//{
//    if (n/a == 1)
//    {
//        printf("%d ", a);
//        return;
//    }
//    
//    if (n%a == 0)
//    {
//        printf("%d ", a);
//        prime_fact(n/a, a);
//    }
//    else
//        prime_fact(n/a, a+1);       
//}

void prime_fact(int num)
{
    int i=2;
    if (num == 1)
        return;
        
    while (num%i!=0)
        i++;
        
    printf("%d ", i);
    prime_fact(num/i);
}

int gcd(int a, int b)
{
    if (b==0)
        return a;
    return gcd (b, a%b);
}

void fibonacci(int a, int b, int terms)
{
    if (terms == 0)
        return;
    
    printf("%d ", b);
    return fibonacci(b, a+b, terms-1);    
}

int div_by_nine(int n)
{
    int sum = 0;    
    if (n==9)
        return 1;
    if (n<9)
        return 0;
    
    while (n!=0)
    {
        sum = sum + n%10;
        n = n/10;
    }    
    return div_by_nine(sum);
}

int div_by_11(int n)
{
    int sum_even=0, sum_odd=0, diff;
    
    if (n%11 == 0 || n==0)
        return 1;
    else
        return 0;
        
    while (n!=0)
    {
        sum_odd = sum_odd + n%10;
        n = n/10;
        sum_even = sum_even + n%10;
        n = n/10;
    }
    diff = sum_even - sum_odd;
    return div_by_11(diff);
}


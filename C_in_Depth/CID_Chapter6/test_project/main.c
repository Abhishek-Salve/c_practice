#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int reverse_num(int n);
int is_palindrome(int a, int b);
int is_prime(int n);
int print_prime(int num1, int num2);
int dec_to_bin(int num);
double power(double a, int b);
int convert_2_dec(int num, int base);
long int factorial(int n);
long permutation(int n, int r);
long int combination(int n, int r);
void prime_factor(int num);
double series (int x, int terms);


int main()
{
    
//    Reverse numbers in an integer
//    int num;
//    int reverse;
//    int is_pali;
//    
//    printf("Enter number to be reversed : ");
//    scanf("%d", &num);
//    printf("Number entered by user = %d\n", num);
//
//    reverse = reverse_num(num);
//    printf("Reversed number = %d\n", reverse);
//    
//    is_pali = is_palindrome(num, reverse);
//    if (!is_pali)
//        printf("num is palindrome");
//    else
//        printf("num is NOT palindrome");    

//    check for prime
//    int num;  
//    printf("Enter number to be check for prime : ");
//    scanf("%d", &num);
//    printf("Number entered by user = %d\n", num);
//    
//    if(is_prime(num))
//        printf("Number is prime\n");
//    else
//        printf("Number is NOT prime\n");
        
//    all prime number between 2 nums 
//    int num1, num2;  
//    printf("Enter 2 number to be check for prime : ");
//    scanf("%d, %d", &num1, &num2);
//    printf("Number entered by user = %d, %d\n", num1, num2);    
//    print_prime(num1, num2);

//    convert decimal to binary
//    int deci_num = 0;
//    long int bin_num = 0;
//    printf("Enter decimal num to be converted to binary : ");
//    scanf("%d", &deci_num);
//    printf("Num entered is : %d\n", deci_num);
//
//    bin_num = dec_to_bin(deci_num);
//    printf("%d to binary = %ld\n", deci_num, bin_num);
    
    
//    find base*exponent value
//    double base = 0;
//    int exponent = 0;
//    printf("Enter base, exponent : ");
//    scanf("%lf, %d", &base, &exponent);
//    printf("Num entered is : %lf, %d\n", base, exponent);    
//    printf("%lf raised to power %d is %lf\n", base, exponent, power(base, exponent));

//    find decimal for octal and binary number
//    char base;
//    int base_value;
//    int num;
//    printf("Enter 'b' for binary and 'o' for octal : ");
//    scanf("%c", &base);
//    printf("Enter a number : ");
//    scanf("%d", &num);
//    base_value = (base == 'b') ? 2 : 8;
//    printf("user inputs = %c, %d, %d\n", base, num, base_value);
//    
//    int dec_value = convert_2_dec(num, base_value);
//    printf("Decimal value : %d", dec_value);

    
//    permutation, combinations
//    long int fact_result = factorial(5);
//    printf("%ld\n", fact_result);
//
//    long perm_value = permutation(5, 2);
//    printf("%ld\n", perm_value);
//
//    long int comb_value = combination(5, 2);
//    printf("%ld\n", comb_value);


//    pascals triangle
//    int row_count = 0;
//    printf("Enter no. of rows for pascals triangle : ");
//    scanf("%d", &row_count);
//    printf("User input for no. of rows = %d\n", row_count);
//    
//    for (int i=0; i <row_count; i++)
//    {
//        for (int j=0; j<=i; j++)
//        {
//            printf("%ld ", combination(i, j));            
//        }
//        printf("\n");
//    }


//    prime factors
//    int num = 0;
//    printf("Enter number to be prime factor : ");
//    scanf("%d", &num);
//    printf("User input = %d\n", num);
//    
//    printf("Factors are : ");
//    prime_factor(num);


//    series value for x and no. of terms
    int num = 0;
    int terms = 0;
    
    printf("Enter value of x : ");
    scanf("%d", &num);
    printf("Enter no. of terms : ");
    scanf("%d", &terms);
    
    printf("User input = %d, %d\n", num, terms);
    printf("%lf\n", series(num, terms));    
    
    return 0;
}


int reverse_num(int n)
{
//    int cur_num = n;
    int rev_num = 0;
    do
    {
//        rev_num *= 10;
        rev_num = rev_num*10 + n%10;
        n /= 10;        
    } while(n > 0);
    return rev_num;
}

int is_palindrome(int a, int b)
{
    if (a == b)
        return 0;
    else
        return 1;
}

int is_prime(int n)
{
//    int num = n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
            return 0;
    }
    return 1;    
}

int print_prime(int num1, int num2)
{
    for(int i=num1; i <= num2; i++)
    {
        if(is_prime(i))
            printf("%d\n", i);
    }
    return 0;
}

int dec_to_bin(int num)
{
    int rem;
    int bin = 0;
    long a = 1;
    
    do
    {
        rem = num%2;
        bin = bin + rem*a;
        num = num/2;
        a = a*10;
    } while(num>0);
    
    return bin;
}

double power(double a, int b)
{
    int i;
    double p =1;
    
    if (b==0)
        return 1;
    else
    {
        for(i=1; i <= abs(b); i++)
            p = p * a;
        if (b>0)
            return p;
        else
            return 1/p;
    }
}

int convert_2_dec(int num, int base)
{
    int rem, result=0, temp;
    int multiplier = 1;
    
    while(num > 0)
    {
        rem = num%10;
        temp = rem * multiplier;
        result = result + temp;
        multiplier = multiplier * base;
        num = num/10;        
    }
    return result;
}

long int factorial(int n)  // factorial is done only for non-negative integers
{
    long int fact = 1;
    if (n==0)
        return 1;
    for (int i=n; i>=1; i--)
        fact = fact * i;
    return fact;    
}

long permutation(int n, int r)
{
    long p;
    p = factorial(n) / (factorial(n-r));
    return p;
}

long int combination(int n, int r)
{
    long int c;
    c = permutation(n, r) / factorial(r);
    return c;
}

void prime_factor(int num)
{
    for (int i=2; num!=1; i++)
    {
        while(num%i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
    }    
}

double series(int x, int terms)
{
    float term_value = 0;
    int exponent = 1;
    signed int sign = 1;
    
    for(int i=1; i<=terms; i++)
    {
        sign = (i%2 == 0) ? -1 : 1;
        exponent = (2*i) - 1;
        term_value = term_value + (sign*power(x, exponent)) / factorial(exponent);
    }
    return term_value;
}
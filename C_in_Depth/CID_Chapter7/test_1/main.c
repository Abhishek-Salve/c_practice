#include <stdio.h>
#include <math.h>

long int fact(int n);
long int sum_to_n(int n);
void display_1(int n);
void display_2(int n);


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
    int num = 0;
    printf("Enter number for display : ");
    scanf("%d", &num);
    printf("User has entered = %d\n", num);
    
    display_1(num);
    printf("\n");
    display_2(num);
    
    
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
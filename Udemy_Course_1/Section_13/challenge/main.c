#include <stdio.h>
void square_func(int *num);

int main()
{
    int num = 7;
    
    printf("num = %d\n", num);
    square_func(&num);
    printf("num = %d\n", num);
    return 0;
}


void square_func(int *num)
{
    *num = *num * *num;
    // return num;
}
#include <stdio.h>
#include <stdbool.h>

int gcd(int x, int y);
float absolute(float x);
float square_root(float x);

int main()
{
	int a = 98;
    int b = 56;    
    float abs_1 = -45.2;
    float square_num = 89.0;
    
    printf("a:%d, b:%d\n", a, b);
    int gcd_result = gcd(a, b);
    printf("GCD result is %d\n", gcd_result);
    
    float abs_value = absolute(abs_1);
    printf("absolute return is %.2f\n", abs_value);

    float square_root_value = square_root(square_num);
    printf("square_root_value return is %.2f\n", square_root_value);
    
	return 0;
}

int gcd(int x, int y)
{
    int result = 0;
    if (x > y) {
        result = y;
    } else {
        result = x;
    }    
    // printf("Initial result = %d\n", result);
    
//    do {
//        result -= 1;
//        printf("result = %d\n", result);
//    } while((x % result != 0) && (y % result != 0));

    while (result) {
        if ((x % result == 0) && (y % result == 0))
            break;
        result -= 1;
//        printf("result = %d\n", result);
    }
    
    return result;
}

float absolute(float x)
{
    if (x < 0)
        x *= -1;    
    return x;
}

float square_root(float x) {
    float start = 2.0;
    
    while((start != 0.0) || (start < x)) {
        if ((start) == (((x / start) + start) / 2.0)) {
//        if (start * start = x) {
            return start;
        } else if (start*start < x) { 
            start += 1.0;
        } else {
            start -= 1.0;
        }
        printf("start = %f\n", start);
    }
    return 0;    
}
#include <stdio.h>
void display_bits(int x);

void display_bits(int x)
{
    int i, mask;
    for (i = 31; i >=0; i--)
    {
        mask = 1<<i;
        // Test and print ith bit
        putchar((x & mask) ? ('1'):('0'));
        if (i%4 == 0)
            putchar(' ');
    }
    printf("\n");
}

int main()
{
//    int x;
//    printf("Enter an integer : ");
//    scanf("%d", &x);
//    printf("Number entered : %x\n", x);
//    display_bits(x);

//    int a, b;
//    printf("Enter hex values for a, b : ");
//    scanf("%x%x", &a, &b);
//    printf("Numbers entered a = %x, b = %x\n", a, b);
    
//    int a = 0, bit_position = 0, mask = 0; //, bit, ;
//    printf("Enter a value in hexadecimal : ");
//    scanf("%x", &a);
//    printf("user number a = %x \n", a);
//    display_bits(a);
//    
//    while(1)
//    {
//        printf("Enter bit position that you want to test : ");
//        scanf("%d", &bit_position);
//        printf("user input for test bit position = %d\n", bit_position);
//        
//        mask = 1 << bit_position;
//        printf("mask is %x\n", mask);
//        
//        if ((a & mask) == 0)
//            printf("Bit position %d is 0\n", bit_position);
//        else
//            printf("Bit position %d is 1\n", bit_position);
//    }

//    int i;
//    char str[30] = "hello world";
//    
//    for (i = 0; str[i]!='\0'; i++)
//    {
//        printf("%c", str[i]);
////        putchar(str[i]);
//    }    
//    printf("\n");
//    
//    i = 0;
//    for (i = 0; str[i]!='\0'; i++)
//    {
////        printf("%c", str[i]);
//        putchar(str[i]);
//    }
//    printf("\n");


// even or odd program
//    int number, mask;
//    printf("Enter integer number : ");
//    scanf("%d", &number);
//    printf("user input number is : %d\n", number);
//    
//    mask = 0x1;
//    
//    if ((number & mask) == 0)
//    {
//        printf("number %d is even", number);
//    }
//    else
//    {
//        printf("number %d is odd", number);
//    }

// clear the rightmost 1 bit
//    int number;
//    printf("Enter a number : ");
//    scanf("%d", &number);
//    printf("user number is : %d\n", number);
//    display_bits(number);
//    
//    number = number & (number - 1);  // to clear the right most 1 bit
//    display_bits(number);    

// check if number is power of 2
//    int number, mod_number;
//    printf("Enter a number : ");
//    scanf("%d", &number);
//    printf("user number is : %d\n", number);
//    display_bits(number);
//    
//    mod_number = number & (number - 1);  // to clear the right most 1 bit
//    display_bits(mod_number);    
//    
//    if (mod_number == 0)
//        printf("number %d is exact power of 2", number);
//    else
//        printf("number %d is NOT exact power of 2", number);
    
//    int number, mask, i, no_of_ones = 0;
//    printf("Enter a number : ");
//    scanf("%d", &number);
//    printf("user entered number is = %d\n", number);
//    
//    for (i = 0; i <= 31; i++)
//    {  
//        mask = 1 << i;
//        if ((number & mask) != 0)
//            no_of_ones += 1;        
//    }
//
//    printf("no_of_ones = %d\n", no_of_ones);
//    display_bits(number);

// create mask for custom bits

//    int mask = (1 << 7) | (1 << 6) | (1 << 5) | (1 << 4);
//    display_bits(mask);
//
//    // clear the bits
//    int number = 0xFFFF;
//    display_bits(number);
//    number = number & ~mask;
//    display_bits(number);
//    
//    // set the bits
//    number = 0xAA0000;
//    display_bits(number);
//    number = number | mask;
//    display_bits(number);
//    
//    // toggle the bits
//    number = 0xACACAC;
//    display_bits(number);
//    number = number ^ mask;
//    display_bits(number);
//    number = number ^ mask;
//    display_bits(number);

// extract bits for a section from number y and add it to number x
//    int x = 0xCABCAB;
//    display_bits(x);
//
//    int y = 0xFF00FF;
//    display_bits(y);
//    
//    int mask = 0xF << 4;
//    display_bits(mask);
//    
//    // clear x for mask
//    x = x & ~mask;
//    display_bits(x);
//    x = x | (y & mask);
//    display_bits(x);


// extract bits for a another section(3:0) from number y and add it to number x (7:4)
//    int x = 0xCABC33;
//    printf("x = "); display_bits(x);
//
//    int y = 0xFF00AC;
//    printf("y = "); display_bits(y);
//    
//    int mask = 0xF << 4;
//    // display_bits(mask);
//    
//    // clear x for mask
//    x = x & ~mask;
//    // display_bits(x);
//    x = x | ((y << 4) & mask);
//    printf("r = "); display_bits(x);

// create custom mask from bit 13 to bit 5
//    int top = 13;
//    int last = 5;
//    int mask = ~(~0 << (top-last+1)) << last;
//    display_bits(mask);
 

// swapping numbers without temp variable
//    int x = 0xA;
//    int y = 0xC;
//    
//    display_bits(x);
//    display_bits(y);
//    
//    x = x ^ y; // x = x xor y
//    y = x ^ y; // y = x xor y xor y --> x
//    x = x ^ y; // x = x xor y xor x --> y 
//    
//    display_bits(x);
//    display_bits(y);

// find 2's complement
//    int num = 0xAAAC00;
//    display_bits(num);
//    
//    int num_2c = ~num + 1;
//    display_bits(num_2c);
//    
//    int i = 0, mask;
//    int x = num;
//    
//    for (i=0; i <=31; i++)
//    {
//        mask = 1 << i;
//        if ((x & mask) != 0)
//            break;
//    }
//    
//    for (i=i+1; i <=31; i++)
//    {
//        mask = 1 << i;
//        x = x ^ mask;
//    }
//    display_bits(x);

// find closes power of 2
//    int num = 127;
//    int i;
//    
//    for (i = 0; i <=31; i++)
//    {
//            
//        if ((num >> i) == 0)
//            break;
//    }
//    printf("value of i = %d\n", i);
//    if (num == (1 << (i-1)))
//        printf("closest highest power of number = %d\n", num);
//    else
//        printf("closest highest power of number = %d\n", 1 << (i));


// rotate right function
//    int num = 0xFACA87;
//    display_bits(num);
//    
//    int rotate_times = 3;
//    int i;
//    
//    for(i=0; i <rotate_times; i++)
//    {
//        if ((num & 0x1) == 0)
//            num = (num >> 1) & (~(1<<31));
//        else
//            num = (num >> 1) | (1 << 31);
//    }
//    display_bits(num);

// rotate left 
//    int num = 0xFACA87;
//    display_bits(num);
//    
//    int rotate_times = 16;
//    int i;
//    
//    for(i=0; i <rotate_times; i++)
//    {
//        if ((num & (1<<31)) != 0)
//            num = (num << 1) | (1 << 0);
//        else
//            num = (num << 1) & (~(1 << 0));
//    }
//    display_bits(num);

    int number = 0xFAFAC6;
    display_bits(number);
    
    int i = 0;//, mask, rev, temp;
    int rev_temp = 0;
    
//    for (i=0; i <=31; i++)
//    {
//        mask = 1 << i;
//        temp = (number & mask);        
//        rev_temp = rev_temp | (temp << (31-i);
//        
//    }
//    printf("reversed num = %d", rev_temp);
//    display_bits(rev_temp);

//    for (i=0; i <=31; i++)
//    {
//        if (number & (1<<i))
//            rev_temp = rev_temp | (1 << (31-i));
//    }
//    display_bits(rev_temp);

    return 0;
}

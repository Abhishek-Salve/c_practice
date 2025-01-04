#include <stdio.h>


int main()
{
//    int max, a = 5, b = 8;
//    max = a>b ? a:b;
//    printf("max : %d\n", max);

//    int a = -3;
//    a = -a-a+!a;
//    printf("%d\n", a);

//    int a = 2, b = 1, c, d;
//    c = (a<b);
//    d = (a>b) && (c<b);
//    printf("c=%d, d=%d\n", c, d);
    
//    int a = 5;
//    a = 6;
//    a = a + 5 * a;
//    printf("a = %d \n", a);

//    int a =5, b=5;
//    printf("%d, %d\n", ++a, b--);
//    printf("%d, %d\n", a, b);
//    printf("%d, %d\n", ++a, b++);
//    printf("%d, %d\n", a, b);

//    int x, y, z;
//    x = 8;
//    y = (++x);
////    z = (x+y)--;
//    printf("%d %d %d \n", x, y, z);

//    int a=4, b=8, c=3, d=9, z;
//    z = a++ + ++b * c-- - --d;
//    printf("a=%d, b=%d, c=%d, d=%d, z=%d", a, b, c, d, z);

//    int a = 14, b, c;
//    a = a % 5;
//    b = a/3;
//    c = a/5%3;
//    printf("%d, %d, %d \n", a, b, c);

//    int x, y, z, k=10;
//    k += (x=5, y=x+2, z=x+y);
//    printf("%d, %d, %d, %d\n", x, y, z, k);

//    float b;
//    b = 15/2;
//    printf("%f\n", b);
//    b = (float) 15/2 + 15/2;
//    printf("%f\n", b);

//    int a, b, c, d;
//    a=b=c=d=4;
//    
//    a*=b+1;
//    c+=d*=3;
//    
//    printf("%d, %d", a, c);

//    int a=5, b=10, temp;
//    temp=a, a=b, b=temp;
//    printf("%d, %d, %d", a, b, temp);

//    int a=11, b=3, max;
//    a>b?max=a:(max=b);
//    printf("max= %d\n", max);
    
//    int a=5, b=6;
//    printf("%d\n", a=b);
//    printf("%d\n", a==b);
//    printf("%d, %d\n", a, b);

//    int a, b=0;
//    a = 10;
//    printf("%d\n", a);
//    a = a++;
//    printf("%d, %d\n", a, b);
//    a = a++ * a--;
//    printf("%d\n", a);
//    printf("%d\n", (a++ * a--));

    int a=2, b=2, x, y;
    x = 4*(++a * 2 + 3);
    y = 4*(b++ * 2 + 3);
    printf("%d, %d, %d, %d \n", a, b, x, y);
    return 0;
}


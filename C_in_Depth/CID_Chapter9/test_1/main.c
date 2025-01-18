#include <stdio.h>
#include <stdlib.h>

void ref(int *x, int *y);
void func_return_multiple(int a, int b, int *pa, int *pd, int*pm);
int *func(int *p, int n);

int main()
{
    
    // print address of variables using address operator
//    int a = 7;
//    int *p1 = &a;
//    
//    printf("Value of p1 = %p \n", p1);
//    printf("Address of a = %p \n", &a);
//    printf("Address of p1 = %p \n", &p1);
//    printf("Value of a = %d, %d, %d \n", a, *p1, *(&a) );
    

    // size of pointer variable, size of values dereferenced by pointer
//    char a='x', *p1=&a;
//    int b=12, *p2=&b;
//    float c=56.2, *p3=&c;
//    double d=23.64, *p4 = &d;
//    
//    printf("sizeof(p1) = %zd, sizeof(*p1) = %zd \n", sizeof(p1), sizeof(*p1));
//    printf("sizeof(p2) = %zd, sizeof(*p2) = %zd \n", sizeof(p2), sizeof(*p2));
//    printf("sizeof(p3) = %zd, sizeof(*p3) = %zd \n", sizeof(p3), sizeof(*p3));
//    printf("sizeof(p4) = %zd, sizeof(*p4) = %zd \n", sizeof(p4), sizeof(*p4));
    
    
    // pointer arithmetics
//    char a='x', *p1=&a;
//    int b=12, *p2=&b;
//    float c=56.2, *p3=&c;
//    double d=23.64, *p4 = &d;
//    
//    printf("Value of p1 = %p\n", p1);
//    printf("Value of p2 = %p\n", p2);
//    printf("Value of p3 = %p\n", p3);
//    printf("Value of p4 = %p\n", p4);
//    
//    p1++;
//    p2++;
//    p3++;
//    p4++;
//    
//    printf("\n");
//    printf("Value of p1 = %p\n", p1);
//    printf("Value of p2 = %p\n", p2);
//    printf("Value of p3 = %p\n", p3);
//    printf("Value of p4 = %p\n", p4);


    // pointers and arrays
//    int arr[5] = {5, 10, 15, 20, 25};
////    int *arr_ptr;
////    arr_ptr = arr;
////    arr_ptr = &arr[0];
//
//    for (int i=0; i<5; i++)
//    {
//        printf("Value of array element %d = %d\t", i, arr[i]);
//        printf("Address of array element = %p\n", &arr[i]);
//    }
//    printf("\n");
//    
//    for (int i=0; i<5; i++)
//    {
//        printf("Value of array element %d = %d\t", i, *(arr+i) );
//        printf("Address of array element = %p\n", arr+i);
//    }
    
    
    // pointer subscripting
//    int arr[5] = {5, 10, 15, 20, 25};
//    int *ptr;
//    ptr = arr;
//    
//    for (int i=0; i<5; i++)
//    {
//        printf("address of array[%d] = %p, %p, %p %p \n", i, &arr[i], arr+i, &ptr[i], ptr+i);
//        printf("value at arr[%d] = %d, %d, %d %d \n", i, arr[i], *(arr+i), ptr[i], *(ptr+i));
//        printf("\n");
//    }


//    int arr[5] = {5, 10, 15, 20, 25};
//    
//    int *ptr_1 = arr;   // pointer to element 0 of arr
//    int (*ptr_2)[5] = &arr;  // points to whole array
//    
//    printf("%p, %p\n", ptr_1, ptr_2);
//    ptr_1++;
//    ptr_2++;
//    printf("%p, %p\n", ptr_1, ptr_2);


    // 
//    int arr[5] = {3, 5, 6, 7, 9};
//    int *p = arr;
//    int (*ptr)[5] = &arr;
//    printf("address : p=%p, ptr=%p \n", p, ptr);
//    printf("value : p=%d, *ptr=%p \n", *p, *ptr);
//    printf("sizeof(p)=%zu, sizeof(*p)=%zu \n", sizeof(p), sizeof(*p));
//    printf("sizeof(ptr)=%zu, sizeof(*ptr)=%zu \n", sizeof(ptr), sizeof(*ptr));


    // 2D array and pointer notations
//    int arr[3][4] = { {10, 20, 30, 40}, {11, 21, 31, 41}, {12, 22, 32, 42} };
//    
//    for (int i=0; i<3; i++)
//    {
//        printf("Address of %d'th array = %p, %p\n", i, arr[i], *(arr+i));
//        for (int j=0; j<4; j++)
//        {
//            printf("%d %d ", arr[i][j], *(*(arr + i)+j) );
//        }
//        printf("\n");
//    }


    // call by reference
//    int a = 10, b = 22;
//    printf("a=%d, b=%d \n", a, b);
//    ref(&a, &b);
//    printf("a=%d, b=%d \n", a, b);


    // return multiple values
//    int x = 10, y = 5;
//    int pa, pd, pm;
//    func_return_multiple(x, y, &pa, &pd, &pm);
//    printf("Sum = %d, Diff = %d, Mul = %d \n", pa, pd, pm);
    
    
    // return pointer from func
//    int n=1;
//    int arr[5] = {1, 2, 3, 4, 5};
//    int *ptr;
//    ptr = func(arr, n);
//    printf("Value of arr=%p, ptr=%p, value of *ptr=%d", arr, ptr, *ptr);


    // array of pointers - to variables
//    int *pa[3];
//    int a=10, b=20, c=30;
//    pa[0] = &a;
//    pa[1] = &b;
//    pa[2] = &c;
//    
//    for(int i=0; i<3; i++)
//    {
//        printf("pa[%d] = %p, \t", i, pa[i]);
//        printf("*pa[%d] = %d \n", i, *pa[i]);
//    }


    // array of pointers - to array elemts
//    int *pa[5];
//    int arr[5] = {10, 20, 30, 40, 50};
//    
//    for(int i=0; i<5; i++)
//        pa[i] = &arr[i];
//    
//    for(int i=0; i<5; i++)
//    {
//        printf("pa[%d] = %p, \t", i, pa[i]);
//        printf("*pa[%d] = %d \n", i, *pa[i]);
//    }


    // void pointer
//    void *vptr;
//    int a=10; //, *pi=&a;
//    float b=12.3, *pf=&b;
//    
//    vptr = &a;
//    printf("Value of a = %d\n", *(int *)vptr);
//    *(int *)vptr = 13;
//    printf("Value of a = %d\n", *(int *)vptr);
//    
//    vptr = pf;
//    printf("Value of b = %f\n", *(float *)vptr);


    // malloc()
    int *p, n, i;
    printf("Enter no. of integers to be entered : \n");
    scanf("%d", &n);
    p = (int *) malloc(n * sizeof(int));
    if (p == NULL)
    {   
        printf("Insufficient memory\n");
        exit(1);
    }
    
    for(i=0; i<n; i++)
    {
        printf("Enter the integer : ");
        scanf("%d", p+i);
    }
    
    for (i=0; i<n; i++)
        printf("%d ", *(p+i));


    return 0;
}

void ref(int *x, int *y)
{
    (*x)++;
    (*y)++;
}

void func_return_multiple(int x, int y, int *pa, int *pd, int*pm)
{
    *pa = x + y;
    *pd = x - y;
    *pm = x * y;
}

int *func(int *p, int n)
{
    p = p + n;
    return p;    
}
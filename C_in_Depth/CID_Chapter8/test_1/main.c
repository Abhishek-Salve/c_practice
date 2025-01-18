#include <stdio.h>

void check_odd_even(int n);
void add_to_array(int test_arr[]);
int sum_of_array(int test_arr[], int n);

#define ROW 3
#define COL 4

#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2


int main()
{
//    int array[5] = {0, 0, 0, 0, 0};
//    array[4] = 1;
//    array[3]++;
//    array[3]++;
//    
//    for (int i=0; i<5; i++)
//        printf("%d ", array[i]);
//    
//    printf("\n");
//    
//    for (int i=0; i<5; i++)
//        array[i] = i;
//    
//    for (int i=0; i<5; i++)
//        printf("%d ", array[i]);
//    
//    printf("\n");


//    program to input values and display them
//    int arr[4];
//    int i = 0;
//    
//    for (i=0; i<4; i++)
//    {
//        printf("%d-th element : ", i);
//        scanf("%d", &arr[i]);
//    }
//    
//    for (i=0; i<4; i++)
//        printf("%d ", arr[i]);


//    program to add elements of an array
//    int arr[5], i, sum = 0;
//    
//    for (i=0; i<5; i++)
//    {
//        printf("Enter the element for arr[%d] : ", i);
//        scanf("%d", &arr[i]);
//        sum = sum + arr[i];
//    }
//    printf("Sum of array is : %d", sum);


//    largest and smallest number in array    
//    int arr[10] = {3, 5, 3, 5, 7, 8, 4, 9, 4, 2};
//    int smallest, largest;
//    smallest = largest = arr[0];
//    
//    for (int i=1; i<10; i++)
//    {
////        printf("%d ", arr[i]);
//        
//        if (arr[i] < smallest)
//            smallest = arr[i];
//        
//        if (arr[i] > largest)
//            largest = arr[i];
//    }
//    
//    printf("Smallest = %d, Largest = %d \n", smallest, largest);
    

//    reverse the array elements
//    int arr[10] = {3, 5, 3, 5, 7, 8, 4, 9, 4, 2};
//    int temp;
//    int i, j;
//    
//    for (i=0, j=9; i<j; i++, j--)
//    {
//        temp = arr[i];
//        arr[i] = arr[j];
//        arr[j] = temp;
//    }
//    
//    printf("The reversed array elemets are :\n");
//    for (i=0; i<10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
    
    
//    decimal to binary using arrays
//    int num = 35;
//    int base = 2;
//    int arr[16] = {0};
//    int i = 0;
//    int rem;
////    int temp;
//    
//    while (num > 0)
//    {
//        rem = num%base;
//        num = num/base;
//        arr[i] = rem;
//        i++;        
//    }
//    
//    printf("%d decimal to binary = ", num);
//    
////    for(int i=0, j=15; i<j; i++, j--)
////    {
////        temp = arr[i];
////        arr[i] = arr[j];
////        arr[j] = temp;
////    }
////    printf("\n");
//    
////    for (int i=0; i<16; i++)
////    {
////        printf("%d", arr[i]);
////    }
////    printf("\n");
//    
//    for(int j=i-1; j>=0; j--)
//        printf("%d", arr[j]);


//    odd or even number using func
//    int arr[10] = {4, 6, 2, 5, 3, 7, 9, 8, 3, 5};
//    
//    for (int i=0; i<10; i++)
//        check_odd_even(arr[i]);


//    pass entire array to func
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    
//    for (int i=0; i<10; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//    
//    add_to_array(arr);
//    
//    for (int i=0; i<10; i++)
//        printf("%d ", arr[i]);
//    printf("\n");


//    add all elements of array using func
//    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int arr2[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
//    int arr3[] = {45, 32, 22};
//
//    printf("Sum of entire array is = %d\n", sum_of_array(arr1, 10));
//    printf("Sum of entire array is = %d\n", sum_of_array(arr2, 12));
//    printf("Sum of entire array is = %d\n", sum_of_array(arr3, 2));

//    program to input and display a matrix
//    int arr[3][3];
//    
//    printf("Enter the elements of matrix\n");
//    for (int i=0; i<3; i++)
//        for (int j=0; j<3; j++)
//            scanf("%d", &arr[i][j]);
//    
//    for (int i=0; i<3; i++)
//    {
//        for (int j=0; j<3; j++)
//            printf("%d", arr[i][j]);
//        printf("\n");
//    }

//    addition to 2 matrix
//    int arr1[ROW][COL], arr2[ROW][COL], arr3[ROW][COL];
//    
//    printf("Enter Matrix 1\n");
//    for (int i=0; i<ROW; i++)
//        for (int j=0; j<COL; j++)
//            scanf("%d", &arr1[i][j]);
//    
//    printf("Enter Matrix 2\n");
//    for (int i=0; i<ROW; i++)
//        for (int j=0; j<COL; j++)
//            scanf("%d", &arr2[i][j]);
//
////    addition
//    for (int i=0; i<ROW; i++)
//        for (int j=0; j<COL; j++)
//            arr3[i][j] = arr1[i][j] + arr2[i][j];
//    
//    for (int i=0; i<ROW; i++)
//    {
//        for (int j=0; j<COL; j++)
//            printf("%d ", arr3[i][j]);
//        printf("\n");
//    }
    
    
//    multiplication of 2 matrices
//    int arr1[ROW1][COL1], arr2[ROW2][COL2], arr3[ROW1][COL2];
//    
//    printf("Enter Matrix 1\n");
//    for (int i=0; i<ROW1; i++)
//        for (int j=0; j<COL1; j++)
//            scanf("%d", &arr1[i][j]);
//    
//    printf("Enter Matrix 2\n");
//    for (int i=0; i<ROW2; i++)
//        for (int j=0; j<COL2; j++)
//            scanf("%d", &arr2[i][j]);
//
//    // multiplication
//    for (int i=0; i<ROW1; i++)
//    {
//        for (int j=0; j<COL2; j++)
//        {
//            arr3[i][j] = 0;
//            for (int k=0; k<COL1; k++)
//                arr3[i][j] += arr1[i][k] * arr2[k][j];                
//        }
//    }
//    
//    
//    for (int i=0; i<ROW1; i++)
//    {
//        for (int j=0; j<COL2; j++)
//            printf("%d ", arr3[i][j]);
//        printf("\n");
//    }
    

//    transpose of matrix
//    int arr1[ROW][COL], arr2[COL][ROW];
//     
//    printf("Enter Matrix to transpose : \n");
//    
//    for (int i=0; i<ROW; i++)
//        for (int j=0; j<COL; j++)
//            scanf("%d", &arr1[i][j]);
//
//    // transpose
//    for (int i=0; i<COL; i++)
//        for(int j=0; j<ROW; j++)
//            arr2[i][j] = arr1[j][i];
//
//    // print the transpose
//    for (int i=0; i<COL; i++)
//    {
//        for (int j=0; j<ROW; j++)
//            printf("%d ", arr2[i][j]);
//        printf("\n");
//    }

//    gets, puts
//    char str[10];
//    printf("Enter a string : \n");
//    gets(str);
//    printf("Input string by user : \n");
//    puts(str);

    return 0;
}


void check_odd_even(int n)
{
    if (n%2 == 0)
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);
}


void add_to_array(int test_arr[])
{
    for (int i=0; i<10; i++)
        test_arr[i] = test_arr[i] * test_arr[i];
}


int sum_of_array(int test_arr[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
        sum = sum + test_arr[i];
    return sum;    
}
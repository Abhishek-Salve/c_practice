#include <stdio.h>

#define SIZE 50

void conversion(int num, int base);
int linear_search(int test_arr[], int array_size, int search_item);
int binary_search(int test_arr[], int array_size, int search_item);


int main()
{
    // program using arrays to read a decimal number and convert
    // to binary, octal, hex
//    int num = 100;
////    int arr_bin[32] = {0};
//    
//    printf("Decimal number input : %d\n", num);
//    conversion(num, 2);
//    conversion(num, 8);


    // linear search in unsorted array
//    int arr[20] = {10, 24, 50, 8, 42, 42, 6, 3, 32, 24, 10, 13, 33, 24, 46, 9, 34, 3, 40, 29};
//    int search = 33;
//    printf("Element to be searched is : %d\n", search);
//    printf("return index = %d\n", linear_search(arr, 20, search));


    // binary search
//    int arr[SIZE] = {1, 2, 3, 5, 8, 10, 11, 13, 16, 17, 18, 19, 24, 27, 33, 35, 36, 37, 41, 44, 47, 48, 50, 52, 53, 54, 59, 60, 61, 62, 64, 65, 72, 73, 74, 75, 82, 83, 85, 96, 97, 98, 99};
//    printf("Search index = %d\n", binary_search(arr, SIZE, 36));
    
    
    // insertion sort
//    int n=20;
//    int arr[20] = {46, 35, 16, 83, 75, 19, 81, 17, 47, 56, 54, 65, 44, 78, 43, 73, 12, 50, 30, 64};
//    for (int i=0; i<20; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//        
//    int temp, min, i, j;
//    
//    for (i=0; i<n-1; i++)
//    {
//        min = i;
//        for (j=i+1; j<n; j++)
//        {
//            if (arr[j] < arr[min])
//                min = j;
//        }
//        if (min!=i)
//        {
//            temp = arr[i];
//            arr[i] = arr[min];
//            arr[min] = temp;
//        }
//    }
//    
//    for (int i=0; i<20; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
    
    
    // move largest number to the end
//    int arr[100] = {40, 20, 50, 60, 30, 10};
//    int n = 6;
//    int temp;
//    int transfer = 0;
//    
//    for (int i=0; i<n-1; i++)
//    {
//        if (arr[i] > arr[i+1])
//        {
//            temp = arr[i];
//            arr[i] = arr[i+1];
//            arr[i+1] = temp;
//            transfer++;
//        }
//    }
//    
//    printf("num of transfers done = %d\n", transfer);
//    
//    for (int i=0; i<n; i++)
//        printf("%d ", arr[i]);


    // bubble sort
//    int arr[100] = {40, 20, 50, 60, 30, 10};
//    int n = 6;
//    int temp;
//    int swap;
//    
//    for (int i=0; i<n-1; i++)  // loop for passes
//    {
//        swap = 0;
//        for (int j=0; j<n-i-1; j++)
//        {
//            if (arr[j] > arr[j+1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//                swap++;
//            }            
//        }
//        printf("pass = %d, num of transfers done = %d\n", i+1, swap);
//        if (swap == 0)
//                break;
//    }
//    
//    
//    printf("num of transfers done = %d\n", swap);
//    
//    for (int i=0; i<n; i++)
//        printf("%d ", arr[i]);


    // insert in an unsorted array
//    int arr[100] = {40, 20, 50, 60, 30, 10};
//    int n = 6;
//    int insert_index = 1;
//    int insert_value = 90;
//    int temp;
//    int swap;
//    
//    for (int i=0; i<=n; i++)
//        printf("%d ", arr[i]);
//    printf("\n");
//    
//    for (int i=insert_index; i<=n; i++)
//    {
////        if (i < insert_index)
////            continue;
//        
//        if (i == insert_index)
//        {
//            temp = arr[i];
//            arr[i] = insert_value;
//        }
//   
//        if (i > insert_index)
//        {
//            swap = arr[i];
//            arr[i] = temp;
//            temp = swap;
//        }
//    }
//    
//    for (int i=0; i<=n; i++)
//        printf("%d ", arr[i]);
//    printf("\n");


    // insert element in sorted array
//    int arr[100] = {2, 4, 6, 9, 12, 15, 16, 19, 20, 0};
//    int insert_value = 13;
//    int n = 10;
//    int i;
//    
//    for (int j=0; j<=n; j++)
//        printf("%d ", arr[j]);
//    printf("\n");
//
///*//    i = n-1;
////    while (arr[i] > insert_value)
//    for (i=n-1; arr[i] > insert_value; i--)
//    {
//        printf("%d, %d\n", i, arr[i]);
//        arr[i+1] = arr[i];
////        i--;
//    }
//    
//    arr[i] = insert_value;*/
//    
//    for (i=n-2; insert_value < arr[i] && i!=0; i--)
//        arr[i+1] = arr[i];
//    arr[i+1] = insert_value;
//    
//    
//    for (int j=0; j<=n; j++)
//        printf("%d ", arr[j]);
//    printf("\n");
    
    
    // negative array index
//    int arr[100] = {2, 4, 6, 9, 12, 15, 16, 19, 20, 0};
//    printf("%d\n", arr[-1]);
//    printf("%d\n", arr[-2]);
//    printf("%d\n", arr[-3]);
//    arr[-1] = 2;
//    arr[-2] = 1;
//    arr[-3] = 0;
//    printf("%d\n", arr[-1]);
//    printf("%d\n", arr[-2]);
//    printf("%d\n", arr[-3]);


    // insertion sort
//    int arr[100] = {82, 42, 49, 8, 25, 52, 36, 93, 59};
//    int n = 9;
//    int i, k, j;
//    
//    for (int x=0; x<=n; x++)
//        printf("%d ", arr[x]);
//    printf("\n");
//
//    for (i=1; i<n; i++)
//    {
//        k = arr[i];
//        for (j=i-1; j >=0 && k<arr[j]; j--)
//        {
//            printf("i = %d, j = %d\n", i, j);
//            arr[j+1] = arr[j];
//        }
//        printf("i = %d, j = %d\n", i, j);
//        arr[j+1] = k;        
//    }
//
//    for (int x=0; x<=n; x++)
//        printf("%d ", arr[x]);
//    printf("\n");


    // merging arrays
//    int arr1[100] = {5, 8, 9, 28, 34};
//    int arr2[100] = {4, 22, 25, 30, 33, 40, 42};
//    int arr3[100] = {0};
//    int i=0, j=0, k=0;
//    int arr1_n = 5;
//    int arr2_n = 7;
//    
//    while ((i <= (arr1_n-1)) && (j <= (arr2_n-1)))
//    {
//        printf("pre :: arr1[i] = %d, arr2[j] = %d, arr3[k] = %d\n", arr1[i], arr2[j], arr3[k]);
//        if (arr1[i] < arr2[j])
//        {
//            arr3[k] = arr1[i];
//            i=i+1;
//            k=k+1;
//        }
//        else
//        {
//            arr3[k] = arr2[j];
//            j=j+1;
//            k=k+1;
//        }
//        printf("post :: arr1[i] = %d, arr2[j] = %d, arr3[k] = %d\n\n", arr1[i], arr2[j], arr3[k-1]);
//    }
//    
//    while (i<=(arr1_n-1))
//    {
//        arr3[k] = arr1[i];
//        i=i+1;
//        k=k+1;
//    }
//    while(j<=(arr2_n-1))
//    {
//        arr3[k] = arr2[j];
//        j=j+1;
//        k=k+1;
//    }
//    
//    for (int k=0; k<arr1_n+arr2_n; k++)
//        printf("%d ", arr3[k]);
//    printf("\n");
    
    
    // pascals triangle
//    int pascal_tri[20] [20] = {0};
//    int n = 7;
//    int i, j;
//    
//    for (i=0; i<n; i++)
//    {
//        for(j=0; j<=i; j++)
//        {
//            if (j==0 || i==j)
//                pascal_tri[i][j] = 1;
//            else
//                pascal_tri[i][j] = pascal_tri[i-1][j-1] + pascal_tri[i-1][j];
//        }
//    }
//    
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<=i; j++)
//            printf("%5d", pascal_tri[i][j]);
//        printf("\n");
//    }


    // prime numbers 
    int a[1000] = {0};
    int p, i, n;
    p = 2;
    n = 100;
    
    while(p*p <= n)
    {
        for (i=2; i*p<=n; i++)
            a[i*p] = 1;
        
        for (i=p+1; i<=n; i++)
            if (a[i] == 0)
            {
                p=i;
                break;  // breal from this inner for loop, and land in the outer while loop
            }
    }
    for(i=2; i<=n; i++)
        if (a[i]==0)
            printf("%d ", i);
    
    printf("\n");
    
    for(i=2; i<=n; i++)
        printf("%d ", i);
    
    
    return 0;
}

void conversion(int num, int base)
{
    int bin_arr[16] = {0};
    int i = 0, rem = 0;
    
    while (num > 0)
    {
        rem = num%base;
        num = num/base;
        bin_arr[i] = rem;
        i++;
    }
    
    printf("Converted number to base %d : ", base);
//    for (int j=i-1; j>0; j--)
    for (int j=16; j>=0; j--)
        printf("%d", bin_arr[j]);
    printf("\n");

}
    
int linear_search(int test_arr[], int array_size, int search_item)
{
    for (int i=0; i<array_size; i++)
    {
//        printf("%d ", test_arr[i]);
        if (test_arr[i] == search_item)
            return i;
    }
    return -1;
}

int binary_search(int test_arr[], int array_size, int search_item)
{
    int low=0, up=array_size-1; 
    int mid;
    
    while (low <= up)
    {
        mid = (low+up)/2;
        printf("low = %d, mid = %d, up = %d \n", low, mid, up);
        
        if (test_arr[mid] > search_item)
            up = mid - 1;
        else if (test_arr[mid] < search_item)
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

 
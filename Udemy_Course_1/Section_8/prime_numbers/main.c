#include <stdio.h>
#include <stdbool.h>


int main()
{
    int j = 0;
	int array_of_numbers[100] = {};
    int prime_numbers[50] = {[0] = 2, [1] = 3};
    int prime_index = 2;
    bool is_prime = false;
    
    printf("The number array is:\n");
    for(int i=0; i<100; i++)
    {
        j = j + 1;
        array_of_numbers[i] = (int)j;
        printf("array %d'th element is %d\n", i, array_of_numbers[i]);
    }
    
//    printf("The number array is:\n");
//    for(int k=0; k<100; k++)
//    {
////        j = j + 1;
////        array_of_numbers[i] = (int)j;
//        printf("array %d'th element is %d\n", k, array_of_numbers[k]);
//    }
    
    printf("prime_numbers[0] is :%d\n", prime_numbers[0]);
    printf("prime_numbers[1] is :%d\n", prime_numbers[1]);
    printf("prime_numbers[2] is :%d\n", prime_numbers[2]);
//    printf("array[2] is :%d\n", array_of_numbers[2]);
    
    for(int k=4; k<100; k++)
    {
        if (array_of_numbers[k] % 2 == 0) 
        {
            continue;
        } 
        else 
        {
            is_prime = true;
            for(int l=2; l < array_of_numbers[k]; l++)
            {
                if (array_of_numbers[k] % l == 0) 
                {
                    is_prime = false;
                    break;                    
                }
            }
            
            if (is_prime == true) {                
                prime_numbers[prime_index] = array_of_numbers[k];
                prime_index += 1;
            }
        }
    }   
    
    printf("The prime array is:\n");
    for(int i=0; i<50; i++)
    {
        printf("prime array %d'th element is %d\n", i, prime_numbers[i]);
    }
    
    printf("prime_numbers[0] is :%d\n", prime_numbers[0]);
    printf("prime_numbers[1] is :%d\n", prime_numbers[1]);
    printf("prime_numbers[2] is :%d\n", prime_numbers[2]);
    return 0;
}

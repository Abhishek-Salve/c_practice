#include <stdio.h>

int main()
{
    int score_1[10] = {0, 0, 0};
    int score_2[10] = {4, 6, 2};
    int score_3[10] = {[2]=4, [1]=6, [0]=2};  // compiled succesfully
    
    printf("%d\n", score_1[0]);
    printf("%d\n", score_2[0]);
    printf("%d\n", score_3[0]);
    
	return 0;
}

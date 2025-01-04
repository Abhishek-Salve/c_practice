#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    int attempts_left = 5;
    int user_guess;
    // int computer_random = 10;
    int scan_return;
    bool user_guessed = false;
    
    time_t t;
    srand((unsigned) time(&t));
    int computer_random = rand()%21;
    
	printf("This is a guess game.\n");
    printf("I have choosen a number between 0 and 20, which you must guess\n");
    
    
    for(; attempts_left > 0; attempts_left--)
    {
        if (attempts_left != 1)
            printf("Attempts left = %d\nGuess a number: ", attempts_left);
        else
            printf("Last guess, good luck\nGuess a number: ");
            
        scan_return = scanf("%d", &user_guess);
        if (user_guess > 20 || user_guess < 1){
            printf("You didnt guess a number less than 20. Game over !!");
            break;            
        }

        if (scan_return == 0) {
            printf("You didnt guess a number. Game over !!");
            break;        
        }
        
        if(user_guess > computer_random) {
            printf("Your guess was high, try again\n\n");
        } else if (user_guess < computer_random) { 
            printf("Your guess was low, try again\n\n");
        } else {
            printf("\nYour guess was right !! \nCongratulations, you have won the game\n");
            user_guessed = true;
            break;
        }  
    } 
    
    if (user_guessed == false) {
        printf("The random number was %d\n", computer_random);
    }
    
	return 0;
}

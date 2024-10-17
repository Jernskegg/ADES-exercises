#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int game(){
    srand(time(0));
    int number = rand() % 100;
    printf("******************************************\n");
    printf("************** Game Started **************\n");
    printf("******************************************\n\n");
    int tries = 1;
    while (tries < 10) {
        
        int guessed_number = 0;
        do {
            printf("%d) Guess a number [0, 99]: ", tries);
            if (scanf(" %d", &guessed_number)){
                break;
            } else {
                printf("Please try again\n\n");
                while (getchar() != '\n');
            };
        } while (1);
        

        if (guessed_number < number){
            printf("Sorry, too small. Try again!\n\n");
        } else if (guessed_number > number){
            printf("Sorry, too big. Try again!\n\n");
        } else{
            printf("Correct!!");
            return 0;
        }
        tries++;
    };
    printf("Sorry, no more attempts. The secret number is %d.\n\n", number);



}

int main(){
    do {
        game();
        char play_again[5];
        
        do {
            printf("Do you want to play again? (y/n): ");
            scanf("%s", play_again);
            printf("\n\n");
            if (strchr("Nn0", play_again[0])) {
                return 0;
            } else if (strchr("Yy1", play_again[0]))
            {
                break;
            } else {
                printf("Didn't quite get that. Please try again\n\n");
            };
        }while (1);
    }while(1);
}

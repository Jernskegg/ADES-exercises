#include <stdio.h>

#define True 1
#define False 0

int input(){
    int input_number;
    do {
        
        printf("Enter a number to check if it is a prime number: ");
        if (scanf(" %d", &input_number)){
            return input_number;
        } else {
            printf("Please try again\n\n");
            while (getchar() != '\n');
        };

    } while (1);
}

int main(){
    int input_number = input();
    for (int i = 2; i <= input_number; i++){
        int prime_check = 2;
        int is_prime = True; 
        for (int j=1; j <= i; j++){
            if (i % j == 0){
                prime_check--;
                if (prime_check < 0){
                    is_prime = False;
                    break;
                }
            }
        }
        if (is_prime) {
            printf("%d\n", i);
        }
    }
    return 0;
}
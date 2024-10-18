#include <stdio.h>

int main(){
    int input_number;
    int total_number = 0;

    do {
        
        printf("Write a positive number: ");
        if (scanf(" %d", &input_number)){
                if (input_number % 2 == 0){
                    break;
                } else {
                    printf("Please enter a positive number.\n\n");
                }

        } else {
            printf("Please try again\n\n");
            while (getchar() != '\n');
        };

    } while (1);
    

    for (int i = 0; i <= input_number; i+=2){
        total_number += i; 
    }

    total_number += input_number;

    printf("%d", total_number);

}
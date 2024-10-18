#include <stdio.h>

int input(){
    int input_number;
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
    return input_number;
}

int main(){
    int input_number = input();
    int total_number = 0;

    for (int i = 0; i <= input_number; i+=2){
        total_number += i; 
    }

    total_number += input_number;

    printf("%d", total_number);

}
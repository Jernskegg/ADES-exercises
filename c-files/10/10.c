#include <stdio.h>

#define clear_buffer while (getchar() != '\n')

int print_binary(int number){
    int bits = 8;
    for (int i = bits - 1; i >= 0 ;i--) {
        int bit = (number >> i) & 1; 
        printf("%d", bit);
    }
}

int input(){
    int number;
    do {
        printf("Enter the number you want the bit value from: ");
        if(scanf("%d", &number) == 1 && number >= 0 && number <= 255) {
            break;
        } else {
            printf("invalid number\n");
            clear_buffer;
        }
    } while (1);
    return number;
}

int main(){
    int number = input();
    print_binary(number);


    
}
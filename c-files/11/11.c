#include <stdio.h>
#include <ctype.h>


int main(){
    int letter;
    int is_new_word = 1;
    int prev_letter;
    
    printf("Enter a character: ");
    while ((letter = getchar()) != '\n' && letter != EOF){        
        if (isblank(letter)) {
            is_new_word = 1;
        }

        if (isblank(prev_letter) && isblank(letter)) {
            continue;
        }

        if (ispunct(letter) || isdigit(letter)){
            continue;
        }

        if (is_new_word) {
            letter = toupper(letter);
            is_new_word = 0;
        } else {
            letter = tolower(letter);
        }
        prev_letter = letter;
        putchar(letter);
    }

   return 0; 
}

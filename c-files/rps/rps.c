#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#define easy 3+1
#define hard 5+1

//1.scissors, 2.paper, 3.rock, 4.lizard, 5.spock

void single_player(char game_mode[]){
    printf("singleplayer\n");
}

void multiplayer(char game_mode[]){
    srand(time(0));
    int game_selected = (strchr("Yy1", game_mode[0])) ? hard : easy;
    int pc_choice = rand() % game_selected;

    printf("selected choice: %s, number is: %d\n", game_mode, pc_choice);
}


int game(){

}

int game_hard(){

}

int mode_selection(){
    int game_mode;
    char hard_mode[3];
    bool correct_answer = false;
    do {
        printf("Do you want to play single-player(1) or multiplayer?(2)\nAnswer 1 or 2.: ");
        scanf("%d", &game_mode);
        printf("do you want to add with the lizard, spock addition?\n yes or no: ");
        scanf("%s", hard_mode);

        correct_answer = true;
        switch (game_mode)
        {
        case 1:
            single_player(hard_mode);
            break;

        case 2:
            multiplayer(hard_mode);
            break;

        default:
            "didn't quit catch that, please try again";
            correct_answer = false;
            break;

        } 
    } while (!correct_answer);
    
}



int main(){
    mode_selection();
}
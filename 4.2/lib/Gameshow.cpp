#include "Gameshow.h"
#include <cstdlib>

int play(char switchDoors){
    int game = 0;
    int wins = 0;
    
    while(game < 1000){
        //Randomly generate a door number for the prize
        int prize = rand() % 3 + 1;
        //Randomly generate a door number for the player's choice
        int player = rand() % 3 + 1;
        //Remove the empty door not chosen by the player
        int host = rand() % 3 + 1;
        while(host == prize || host == player){
            host = (host + 1) % 3 + 1;
        }
        //If the player switches, change the player's choice to the other door
        if(switchDoors == 'Y' || switchDoors == 'y'){
            int oldChoice = player;
            while(player == oldChoice || player == host){
                player = (player + 1) % 3 + 1;
            }
        }
        //If the player wins, increment the win counter
        if(player == prize){
            wins++;
        }
        game++;
    }
    return wins;
}


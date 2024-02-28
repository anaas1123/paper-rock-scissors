#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void the_game(string human_turn){
    
    int random = rand()%3;
    string bot_turn;

    if (random == 0){
        bot_turn = "rook";
    }
    else if (random == 1){
        bot_turn = "paper";
    }
    else {
        bot_turn = "scissors";
    }

    cout << "bot :- " << bot_turn << endl;

    if (human_turn == bot_turn){
        cout << "You Draw !";
        exit(0);
    }
    else if (
        human_turn == "paper" && bot_turn == "rook" ||
        human_turn == "rook" && bot_turn == "scissors" ||
        human_turn == "scissors" && bot_turn == "paper"
    ){
        cout << "You Win !";
        exit(0);
    }
    else{
        cout << "You Lose !";
        exit(0);
    }
}

int main(){
    srand(time(0));
    string pick;while (true){
        cout << "Enter rook , paper or scissors : - ";  cin >> pick;
        if (pick == "paper" || pick == "rook" || pick == "scissors"){
            break;
            }
        }

    the_game(pick);

    return 1123;
}

#include <iostream>
#include <vector>
#include <string>
#include "ttt.hpp"
using namespace std;
string player1;
string player2;
int row;
int column;
char token = 'x';
bool tie = false;
 char position[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

int main () {



cout << "Player 1 please enter your name:\n";
cin >> player1;

cout << "Player 2 please enter your name:\n";
cin >> player2;

cout << player1 << " will be x\n";
cout << player2 << " will be 0\n";
// taking the players name's as input
while(!win_or_draw()) {
  game_board();
  player_input();
  win_or_draw();
}

//the while loop will repeat each function one by one until a player wins

if (token == 'x' && tie == false) {
  cout << player2 << " wins!\n";
}
else if (token == '0' && tie == false) {
  cout << player1 << " wins!\n";
}
else {
  cout << "It's a draw!\n";
}


  
}
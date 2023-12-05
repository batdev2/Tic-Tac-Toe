#include <iostream>
#include <vector>
#include "ttt.hpp"
using namespace std;


// this function outputs the gameboard and uses an array for all 9 positions on the 3x3 grid

void game_board() {
  char position[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
cout << "      TIC-TAC-TOE\n";
cout << "   |   |\n";
cout << position[0][0] << "  | " << position[0][1] << " | " << position[0][2] << "   \n";
cout << "___|___|___\n";
cout << "   |   |   \n";
cout << position[1][0] << "  | " << position[1][1] << " | " << position[1][2] << "   \n";
cout << "___|___|___\n";
cout << "   |   |\n";
cout << position[2][0] << "  | " << position[2][1]  << "  | " << position[2][2] << "   \n";
cout << "   |   |\n";

}

void player_input() {
int digit;
string player1;
string player2;
int row;
int column;
char token = 'x';
char position[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};


if (token == 'x') {

cout << player1 << " Please enter:\n";
cin >> digit;
}

if (token == '0') {
  cout << player2 << " Please enter:\n";
  cin >> digit;
}
if (digit == 1) {
  row = 0;
  column = 0;
}
if (digit == 2) {
  row = 0;
  column = 1;
}
if (digit == 3) {
  row = 0;
  column = 2;
}
if (digit == 4) {
  row = 1;
  column = 0;
}
if (digit == 5) {
  row = 1;
  column = 1;
}
if (digit == 6) {
  row = 1;
  column = 2;
}
if (digit == 7) {
  row = 2;
  column = 0;
}
if (digit == 8) {
  row = 2;
  column = 1;
}
if (digit == 9) {
  row = 2;
  column = 2;
}
else if (digit < 1 || digit > 9) {
  cout << "Invalid!\n";
}

if (token=='x' && position[row][column] != 'x' && position[row][column] != '0') {
  position[row][column] = 'x';
  token = '0';
}

else if (token=='0' && position[row][column] != 'x' && position[row][column] != '0') {
  position[row][column] = '0';
  token = 'x';
}
else {
  cout << "There are no empty spaces!\n";
  player_input();
}

}
/* player_input() lets the player select which position to take for x or 0 depending on the player and it will display on the board. at the end, game_board() and player_input() are called again to show the updated board game */

bool win_or_draw() {
  char position[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
  bool tie = false;
for (int i = 0; i < 3; i++) {
  if (position[i][0] == position[i][1] && position[i][0] == position[i][2] || position[0][i] == position[1][i] && position[0][i] == position[2][i]){
  return true;
}
  if (position[0][0] == position [1][1] && position[1][1] == position[2][2] || position[0][2] == position[1][1] && position[1][1] == position[2][0]){
  return true;
  }
}
//this for loop checks for matching pairs. if the function returns true, then you won//
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    if (position[i][j] != 'x' && position[i][j] != '0'){
      return false;
    }
  }
}
tie = true;
return false;
}

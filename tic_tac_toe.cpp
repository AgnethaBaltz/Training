#include <iostream>
using namespace std;
// global matrix
char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player = 'X';
int n;
// display matrix
void Draw()
{
     //clear screen 
     system("clear");

     cout << "A Tic Tac Toe game: \n"
          << endl;
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               cout << matrix[i][j] << " ";
          }
          cout << endl;
     }
}
// function for input
void Input()
{
     int a;
     //Print message which turn it is
     cout << "It's " << player << "turn. " << "Press the number of the field you want to set your symbol: ";
     cin >> a;

     //putting the symbol on the chosen field, simultaneously checking if field is free
     if (a == 1)
     {
          if (matrix[0][0] == '1')
               matrix[0][0] = player;
          else 
          {
               cout << "The field is already in use, try again!" << endl;
               Input();
          }
     } else if (a == 2)
     {
          if (matrix[0][1] == '2')
               matrix[0][1] = player;
          else 
          {
               cout << "The field is already in use, try again!" << endl;
               Input();
          }
     } else if (a == 3)
     {
          if (matrix[0][2] == '3')
               matrix[0][2] = player;
          else 
          {
               cout << "The field is already in use, try again!" << endl;
               Input();
          }
     } else if (a == 4)
     {
          if (matrix[1][0] == '4')
               matrix[1][0] = player;
          else 
          {
               cout << "The field is already in use, try again!" << endl;
               Input();
          }
     } else if (a == 5)
     {
          if (matrix[1][1] == '5')
               matrix[1][1] = player;
          else 
          {
               cout << "The field is already in use, try again!" << endl;
               Input();
          }
     } else if (a == 6)
     {
          if (matrix[1][2] == '6')
               matrix[1][2] = player;
          else 
          {
               cout << "The field is already in use, try again!" << endl;
               Input();
          }
     } else if (a == 7)
     {
          if (matrix[2][0] == '7')
               matrix[2][0] = player;
          else 
          {
               cout << "The field is already in use, try again!" << endl;
               Input();
          }
     } else if (a == 8)
     {
          if (matrix[2][1] == '8')
               matrix[2][1] = player;
          else 
          {
               cout << "The field is already in use, try again!" << endl;
               Input();
          }
     } else if (a == 9)
     {
          if (matrix[2][2] == '9')
               matrix[2][2] = player;
          else 
          {
               cout << "The field is already in use, try again!" << endl;
               Input();
          }
     }
}
// changing player
void TogglePlayer()
{
     if (player == 'X')
          player = 'O';
     else
          player = 'X';
}
char Win()
{
     // First player
     // horizontal checking
     if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
          return 'X';
     if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
          return 'X';
     if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
          return 'X';
     // vertical checking
     if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
          return 'X';
     if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
          return 'X';
     if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
          return 'X';
     // diagonal checking
     if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
          return 'X';
     if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
          return 'X';

     // Second player
     //horizontal checking
     if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
          return 'O';
     if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
          return 'O';
     if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
          return 'O';
     // vertical checking
     if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
          return 'O';
     if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
          return 'O';
     if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
          return 'O';
     // diagonal checking
     if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
          return 'O';
     if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
          return 'O';

     return '/';
}
int main()
{
     n = 0;
     Draw();
     // forever running while-loop
     while (1)
     {
          n++;
          Input();
          Draw();
          //declaring the winner
          if (Win() == 'X')
          {
               cout << "\nX wins!" << endl;
               break;
          } else if (Win() == 'O')
          {
               cout << "\nO wins!" << endl;
               break;
          } else if (Win() == '/' && n == 9)
          {
               cout << "\nIt's a tie!" << endl;
               break;
          }
          TogglePlayer();
     }
     return 0;
}
#include<iostream>
using namespace std;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'X';
int row , col;
bool draw = false;


void display_board()
{
	system("cls");
	system("color E4");
	//system("color A ,B10");
	cout<<"\t T i c k T a k T o e	G a m e"<<endl;
	cout<<"\t\tPlayer1 [X]"<<endl;
	cout<<"\t\tPlayer2 [O]"<<endl;
	cout<<endl;
	cout<<"\t	     |       |       "<<endl;
	cout<<"\t	 "<<board[0][0]<<"   |  "<<board[0][1]<<"    | "<<board[0][2]<<endl;
	cout<<"\t	_____|_______|_______"<<endl;
	cout<<"\t	     |       |       "<<endl;
	cout<<"\t	 "<<board[1][0]<<"   |  "<<board[1][1]<<"    | "<<board[1][2]<<endl;
	cout<<"\t	_____|_______|_______"<<endl;
	cout<<"\t	     |       |       "<<endl;
	cout<<"\t	 "<<board[2][0]<<"   |  "<<board[2][1]<<"    | "<<board[2][2]<<endl;
	cout<<"\t	     |       |        "<<endl;
	cout<<endl;
}
void player_turn()
{ 
	int choice;
	
	if (turn == 'X')
		{
		cout<<"\t\t Player 1[X] turn: ";
		}
	else if(turn == 'O')	
		{
		cout<<"\t\t Player 2[O] turn: ";
		}
	cin>>choice;
	switch (choice)
	{
		case 1: row =0; col =0; break;
		case 2: row =0; col =1; break;
		case 3: row =0; col =2; break;
		case 4: row =1; col =0; break;
		case 5: row =1; col =1; break;
		case 6: row =1; col =2; break;
		case 7: row =2; col =0; break;
		case 8: row =2; col =1; break;
		case 9: row =2; col =2; break;
		default: cout<<"invalid choice ";break;
		
		}
			if(turn =='X'&& board [row][col] != 'X' && board [row][col] != 'O')
			{
			board[row][col] = 'X';
			turn = 'O';
			}
			else if (turn == 'O'&& board [row][col] != 'X' && board [row][col] != 'O')
			{
			board [row][col] = 'O';
			turn = 'X';       
			}
			else 
				{
				cout<<"Board already filled Try Again!!\n\n";
				player_turn();
				}
			display_board();
}

//game over
bool Game_over()
{	
	//check win
	for(int i=0; i<3; i++)
	if ( board [i][0] == board [i][1] && board [i][0] == board [i][2] || board [0][i] == board [1][i] && board [0][i] == board[2][i] )
	return false;
	
	//check cross
	if(board[0][0] == board [1][1] && board [0][0] == board [2][2] || board[0][2] == board [1][1] && board [0][2] == board [2][0]) 
	return false;
	
	//if there is no box filled game will not over
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++)
	if(board[i][j] != 'X' && board [i][j] != 'O')
	return true;
	
	//draw: all boxes filled but no one win
	draw = true;
	return false;
	}  
int main()

{
	
	while (Game_over())
	{
	//calling functions
	display_board();
	player_turn();
	Game_over();	

	}
	
if (turn == 'X' && draw == false)
cout<< "player2 [O] Wins!! Congratulations\n";
else if (turn == 'O' && draw == false)
cout<< "player1 [X] Wins!! Congratulations\n";

//draw
else
cout<<"GAME DRAW!!\n";

	

	
}
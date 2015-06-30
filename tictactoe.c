/* Tic Tac Toe game 
Programmer : Chiranjeeevi
Date	   : 21-05-15
Algo       : init_board()
			 get_computer_move()
			 get_player_move()
			 gameplay()
			 check()
			 display_board()
			 winCheck()
*/
#include <stdio.h>
#include <stdlib.h>
#define DIMENSIONS 3
void init_board(char );
void get_computer_move(void );
void get_player_move(void );
void gameplay(int );
int check(int *, int * );
void display_board(void );
int winCheck(char );

char board[DIMENSIONS][DIMENSIONS];
int main() {
	init_board(' ');
	gameplay(0);
	// display_board();
	return 0;
}

void init_board(char ch) {
	int i, j;
	for(i = 0; i < DIMENSIONS; i++) {
		for(j = 0; j < DIMENSIONS; j++) {
			board[i][j] = ch;
		}
	}
}

void display_board(void) {
	int i, j;
	for(i = 0; i < DIMENSIONS; ++i) {
		for(j = 0; j < DIMENSIONS; ++j) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void gameplay(int turn) {
	if(turn % 2 == 0) {
		get_computer_move();
		turn++;
		gameplay(turn);
	} else {
		get_player_move();
		turn++;
		gameplay(turn);
	}
}

void get_computer_move(void) {
	int x, y;
	if(check(&x, &y)) {
		// Put O in the box x,y
		board[x][y] = 'O';
	}
	display_board();
	if(winCheck('O')) {
		printf("The winner is COMPUTER..!!\n");
		exit(0);
	}
}

int check(int *p, int *q) {
	int i, j;
	for (i = 0; i < DIMENSIONS; ++i)
	{
		for (j = 0; j < DIMENSIONS; ++j)
		{
			if(board[i][j] == ' ') {
				*p = i;
				*q = j;
				return 1;
			}
		}
	}
	return 0;
}

void get_player_move(void) {
	int x, y;
	printf("Enter a position to mark X: ");
	scanf("%d %d", &x, &y);
	board[x][y] = 'X';
	display_board();
	if(winCheck('X')) {
		printf("The winner is PLAYER..!!\n");
		exit(0);
	}
}

int winCheck(char ch) {
	// horizontal
	int i, j, h_count = 0, v_count = 0, c_count = 0;
	for (i = 0; i < DIMENSIONS; ++i)
	{
		for (j = 0; j < DIMENSIONS; ++j)
		{
			if(board[i][j] == ch)
				h_count++;
			else
				break;
		}
		if(h_count == 3)
			return 1;
		else
			h_count = 0;
	}
	// vertical
	for (i = 0; i < DIMENSIONS; ++i)
	{
		for (j = 0; i < DIMENSIONS; ++j)
		{
			if(board[j][i] == ch)
				v_count++;
			else
				break;
		}
		if(v_count == 3)
			return 1;
		else
			v_count = 0;
	}
	// cross
	for (i = 0; i < DIMENSIONS; ++i)
	{
		if(board[i][i] == ch)
			c_count++;
		else
			break;
	}
	if(c_count == 3)
		return 1;
	else
		c_count = 0;
	for (i = 0; i < DIMENSIONS; ++i)
	{
		if(board[DIMENSIONS - (i+1)][i] == ch)
			c_count++;
		else
			break;
	}
	if(c_count == 3)
		return 1;
	else
		c_count = 0;
	return 0;
}
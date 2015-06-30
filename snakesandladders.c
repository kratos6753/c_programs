/* Snakes and Ladders
Programmer: Chiranjeevi
Date      : 22-06-15
Algo      : init_board()
			get_computer_move()
			get_player_move()
			snake_check()
			gameplay()
			display_board()
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define DIMENSIONS 10
void init_board(void );
void gameplay(int );
void get_computer_move(int * );
void get_player_move(int * );
void snake_check(char , int * );
void display_board(void );
char board[DIMENSIONS][DIMENSIONS];
int c_count = 1, p_count = 1;
int main() {
	srand(time(NULL));
	init_board();
	gameplay(0);
	return 0;
}

void init_board(void) {
	int i, j;
	for (i = 0; i < DIMENSIONS; ++i)
	{
		for (j = 0; j < DIMENSIONS; ++j)
		{
			board[i][j] = '_';
		}
	}
}

void gameplay(int turn) {
	if(turn % 2 == 0) {
		get_computer_move(&c_count);
		turn++;
		gameplay(turn);
	} else {
		get_player_move(&p_count);
		turn++;
		gameplay(turn);
	}
}

void get_computer_move(int *count) {
	printf("COmputer is Playing\n");
	int r = rand() % 6 + 1, temp;
	temp = *count + r;
	printf("%d\n", r);
	if(temp <= 100) {	
		board[*count/10][*count%10-1] = '_';
		*count = temp;
		board[*count/10][*count%10-1] = 'X';
		snake_check('X', count);
	}
	display_board();
}

void get_player_move(int *count) {
	printf("Player is playing\n");
	int r = rand() % 6 + 1, temp;
	char ch = 'n';
	temp = *count + r;
	printf("(%d) Wanna role the dice (Y/N): ", r);
	scanf("%c", &ch);
	if(ch == 'N' || ch == 'n') {
		exit(0);
	}else if(temp <= 100 && (ch == 'Y' || ch == 'y')) {
		board[*count/10][*count%10-1] = '_';
		*count = temp;
		board[*count/10][*count%10-1] = 'O';
		snake_check('O', count);
	}
	display_board();
}

void display_board(void) {
	int i, j;
	for (i = 0; i < DIMENSIONS; ++i)
	{
		for (j = 0; j < DIMENSIONS; ++j)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void snake_check(char ch, int *n) {
	int head[] = {32, 43, 49, 55, 61, 68, 76, 83, 88, 97}, tail[] = {5, 9, 15, 18, 27, 34, 45, 54, 62, 74}, i;
	for (i = 0; i < DIMENSIONS; ++i)
	{
		if(head[i] == *n) {
			board[*n/10][*n%10-1] = '_';
			*n = tail[i];
			board[*n/10][*n%10-1] = ch;
			break;
		}
	}
}
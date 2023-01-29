#include <stdio.h>
#include <stdlib.h>

static int k, i, j;
static char board[3][3];
const char player = 'O';

void ClearBoard(){
	int x,y;
	
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			//i=0;
			//j=0;
			board[x][y] = ' ';
			
		}
	}
}

int checkEmpty(int x, int y){
	if(board[x][y] == ' '){
		return 1;
	}	
	else 
		return 0;
}

void putMark(int i, int j){
	
	
	
	if(checkEmpty != 0){
		board[i][j] = player;
	}

	
}

int getWinner(){
	int x, y;
	
	//check rows
	for(x=0;x<3;x++){
		
		if(board[0][x] == board[1][x] && board[0][x] == board[2][x] && board[0][x] != ' '){
			printf("%c has won!\n", board[0][x]);
			return 1;
		}
	}
	
	//check column
	for(y=0;y<3;y++){
		if(board[x][0] == board[x][1] && board[x][0] && board[x][2] && board[x][0] != ' '){
			printf("%c has won!\n", board[x][0]);
			return 1;
		}
	}
		
	//check diagonals
	if(board[0][0] == board[1][1] && board[0][0] == board [2][2] && board[1][1] != ' '){
		printf("%c has won!\n", board[0][0]);
		return 1;
	}
	if(board[0][2] == board[1][1] && board[0][2] == board [2][0] && board[1][1] != ' '){
		printf("%c has won!\n", board[1][1]);
		return 1;
	}
	return 0;
}


void DisplayBoard(){
	printf(" %c | %c | %c", board[0][0], board[0][1], board[0][2]);
	printf("\n---|---|---\n");
	printf(" %c | %c | %c", board[1][0], board[1][1], board[1][2]);
	printf("\n---|---|---\n");
	printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

	
}


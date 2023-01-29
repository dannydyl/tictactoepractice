#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "functions.h"

int main() {
	ClearBoard();
	int row, col;
	int f=1;
	
	
	printf("Game start\n");
	printf("Enter Row: ");
	scanf("%d", &row);
	row--;
	printf("Enter Column: ");
	scanf("%d", &col);
	col--;

	
	do{
	
		putMark(row, col);
	
		DisplayBoard();
		
		if(getWinner() == 1)
			break;
	
		printf("\nEnter Row: ");
		scanf("%d", &row);
		row--;
		printf("Enter Column: ");
		scanf("%d", &col);
		col--;
		
	
		
	}while(1);
	
	
	return 0;
}

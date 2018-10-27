/* Program 9.9 REVERSI An Othello type game*/
#include<stdio.h>

const int SIZE=6;/*Board size--must be even*/
const char comp_c='@';/*Computer's counter*/
const char player_c='o';/*Player's counter*/

/*Function phototypes*/
void display(char board[][SIZE]);

int main (void)
{
	char board [SIZE][SIZE] ={0};/*The board*/
	int row=0;/*Board row index*/
	int col=0;/*Board column index*/
	
	printf("\nREVERSI \n\n");
	printf("You can go first on the first game,then we will take turns.\n");
	printf("You will be white-(%c)\n I will be black -(%c).\n",player_c,comp_c);
	printf("Select a square for your move by typing a digit for the row\nand a letter for the column with no spaces between.\n");
	printf("\nGood luck!Press Enter to start.\n");
	scanf("%c",&again);
	
	/*Blank all the board squares*/
	for(row=0;row<SIZE;row++)
		for(col=0;col<SIZE;col++);
		board[row][col]=' ';
		
	/*Place the initiital four counters in the center */
	int mid=SIZE/2;
	board [mid-1][mid-1]=board[mid][mid]=player;
	board[mid-1][mid]=board[mid][mid-1]=comp_c;
	display(board);/*Display the board*/
	return 0;
}
/******************************************
*Function to display the board in its     *
*corrent state with row numbers and column *
*letters to identify squares.             *
*Parameter is the board array.            *
*******************************************/
void display(char board[][SIZE])
{
	/*Display the column labels*/
	char col_label='a';/*Column label*/
	printf("\n");/*Start top line*/
	for(int col=0;col<SIZE;col++)
		printf("%c",col_;abel+col);/*Display the toop line*/
	printf("\n");          /*End the top line*/
	
	/*Display the rows...*/
	for(int row<SIZE;row++)
	{
		/*display the top line for the current row*/
		printf(" +");
		for(int col=0;col<SIZE;col++)
			printf("---+");
		pritf("\n2d|",row+1);
		
		/*Display the counters in current row*/
		for(int col=0;col<SIZE;col++)
			printf("%c|",board[row][col]);/*Display counters in row */
		printf("\n");
	}
	/*Finally display the bottom line of the board*/
	printf(" +");                /*Start the bottom line*/
	for(int col=0;col<SIZE;col++)
		printf("---+");    /*Display the buttom line*/
	printf("\n");          /*End the botton line*/
}


//Program 9.9 REVERSI An Othello type game
#include<stdio.h>
#include<stdbool.h>

const int SIZE=6;            //Board size-must be even
const char comp_c='@';        //Computer's counter
const char player_c='o';      //Player's counter
//Function prototypes
void display(char board[][SIZE]);
int valid_moves(char board[][SIZE],bool moves[][SIZE],char player);

int main(void)
{
	char board[SIZE][SIZE]={0};   //The board
	bool moves[SIZE][SIZE]={false};//Valid movies
	int row=0;                     //Board row index
	int col=0;
	
}

































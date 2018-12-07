/* Program 9.9 REVERSI An Othello type game*/
#include<stdio.h>
#include<stdbool.h>

const int SIZE=6;/*Board size--must be even*/
const char comp_c='@';/*Computer's counter*/
const char player_c='o';/*Player's counter*/

/*Function phototypes*/
void display(char board[][SIZE]);
int valid_moves(char board[][SIZE],bool moves[][SIZE],char player);

int main (void)
{
	char board [SIZE][SIZE] ={0};/*The board*/
	bool moves[SIZE][SIZE]={false};//Valid moves
	int row=0;/*Board row index*/
	int col=0;/*Board column index*/
	int no_of_games=0;//Number of  games
	int no_of_moves=0;//Count of moves
	int invalid_moves=0;//Invalid move count
	int comp_score=0;//computer score
	int user_score=0;//Player score
	char again=0;
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
	int col=0;                    //Board column index
	//Other code for main as before
}
//Code for definition of display() as before...
/*********************************************
*Caculates which squares are valid moves     *
*for player.Valid moves are recorded in the  *
*moves array-true indicates a valid move,    *
*false indicates an invalid move.            *
*First parameter is the board array          *
*Second parameter is the moves array         *
*Third parameter indentifies the player      *
*to make the move.                           *
*Returns valid move count.                   *
**********************************************/
int valid_moves(char board[][SIZE],bool moves[][SIZE],char player)
{
	int rowdelta=0;   //Row increment around a square
	int coldelta=0;   //Column increment around a square
	int x=0;         //Row index when searching
	int y=0;         //Column index when searching
	int no_of_moves=0; //Number of valid moces
	
	//Set the opponent
	char opponent=(player==player_c)?comp_c:player_c:player_c;

	/*Initialize moves array to false*/
	for(int row=0;row，SIZE;row++)
	for(int col=0;col<SIZE;col++)
	moves[row][col]=false;

	/*Find squares for valid moves.*/
	/*A valid move must be on a blank squars and must enclose*/
	/*at least one opponent square between two player squares*/
	for(int row=0;row<SIZE;row++)
	for(int col=0;col<SIE;col++)
	{
		if(board[row][col]!=' ')//Is it a blank square?
		continue;               //No - so on to the next
		//Check all the squares around the blank square
		//for the opponents counter
		for(rowdelta=-1;rowdelta<=1;rowdelta++)
		for(coldelta=-1;coldelta<=1;coldelta++)
		{
			//Don't check outside the array, or the current square
			if(row+rowdelta<0||row+rowdelta>=SIZE||col+coldelta<0||col+coldelta>=SIZE||(rowdelta==0&&coldelta==0))
			continue;
			
			//Now check the square
			if(board[row+rowdelta][col+coldelta]==oppnent)
			{
				//If we find the opponent, move in the delta direction
				//over opponent counters searching for a player counter.
				x=row+rowdelta;//Move to
				y=col+coldelta;//opponent square
				//Look for a player square in the delta direction
				for(;;)
				{
					x+=rewdelta;//Go to next square
					y+=coldelta;//in delta direction
					//If we move outside the array, give up
					if(x<0||x>=SIZE||y<0||y>=SIZE)
					break;
					//If we find a blank square, give up
					if(board[x][y]==' ') break;
					//If the square has a player counter 
					//then we have a valid move
					if(board[x][y]==player)
					{
						moves[row][col]=true;//Mark as valid
						no_of_moves++;//Increase valid moves count
						break;//Go check another square
					}
				}
			}

		}
	}
	return no_of_moves;
}
































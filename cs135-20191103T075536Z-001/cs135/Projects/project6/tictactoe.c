/* Prim Wandeevong // CS 135 // Project 6 // 3-21-19 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define SIZE 3

void display_table(char a[SIZE][SIZE]);
void clear_table(char a[SIZE][SIZE]);
bool check_table_full(char a[SIZE][SIZE]);
void update_table(char a[SIZE][SIZE], int x, int y, char token);
bool check_legal_option(char a[SIZE][SIZE], int x, int y);
void generate_player2_move(char a[SIZE][SIZE], int x, int y);
int check_three_in_a_row(char a[SIZE][SIZE]);
bool check_end_of_game(char a[SIZE][SIZE]);
void get_player1_move(char a[SIZE][SIZE], int x, int y);
void print_winner(char a[SIZE][SIZE]);

		
/* Main function */
int main ()								
{
    //Declare the tic-tac-toe board
    char board[SIZE][SIZE];
    
    //The row and column of the move for either player 1 or 2 
    int row, col;
    
 
    //Clear the table
    clear_table(board);
    
    //Display the table
    display_table(board);
    
    do
    {
    	//Have player 1 enter their move
    	get_player1_move(board, row, col);
    	
    	//Generate player 2 move
    	generate_player2_move(board, row, col);
    	
    //Do this while the game hasn't ended
    }while (check_end_of_game(board) == false);
    
    //After the game is over, print who won
    print_winner(board);
    
    return 0;
    
}

/* Displays Table */
void display_table(char a[SIZE][SIZE])
{	
	printf ("The current state of the game is:");

 	for (int row = 0; row < SIZE; row++)
   	{
   		printf ("\n");
   		
        	for (int col = 0; col < SIZE; col++)
        	{
            	printf ("%c ", a[row][col]);
        	}
        		
   	}
   	
   	printf("\n");

    	return;
}

/* Clears table */
void clear_table(char a[SIZE][SIZE])
{
	for (int row = 0; row < SIZE; row++)
	{
        	for (int col = 0; col < SIZE; col++)
        	{
            	a[row][col] = '_';
        	}
	}
    
    	return;
}

/* Checks if Table is full */
bool check_table_full(char a[SIZE][SIZE])
{
	bool full;
    
	for (int row = 0; row < SIZE; row++)
	{
        	for (int col = 0; col < SIZE; col++)
        	{
            		if (a[row][col] == '_') {
                	full = false;
                	return full;
                	}
                }
	}
    	
}


/* Update table */
void update_table(char a[SIZE][SIZE], int x, int y, char token)
{
	a[x][y]	= token;
	
}

/* Checks legal option */
bool check_legal_option(char a[SIZE][SIZE], int x, int y)
{
	bool legal = true;
	
	if (a[x][y] == '_') {
		if (x > 2 || x < 0) {
			legal = false;
			return legal;
			}
		
		else if (y > 2 || y < 0) {
			legal = false;
			return legal;
			}
		else 
			return legal;
	
		}
		
	
}

/* Generates player 2's move */
void generate_player2_move(char a[SIZE][SIZE], int x, int y)
{
	int c, d;
	bool ok;
	
	if (check_end_of_game(a) != true) {
	
		c = rand() % 3;
		d = rand() % 3;
	
		ok = check_legal_option(a,c,d);
	
		while (ok == false) {
	
			c = rand() % 3;
			d = rand() % 3;
	
			ok = check_legal_option(a,c,d);
		
			}

		update_table(a, c, d, 'X');
		
		c++;
		d++;
	
		printf("Player 2 has entered [row, col]: %d,%d\n", c, d);
	
		display_table(a);
		}
		
	return;	
}

/* Checks for three in a row */
int check_three_in_a_row(char a[SIZE][SIZE])
{ 
	int row, col;
	int winner;

    // Checks rows
    	 /* Player 1 wins */	
       	if (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') {
            	winner = 1;
      		return winner;
      		}      
            		
       	else if (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') {
            	winner = 1;
            	return winner;
            	}
            			
       	else if (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') {
            	winner = 1;
            	return winner;
            	}
        /* Player 2 wins */
        else if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') {
            	winner = 2;
            	return winner;
     		}
            			
        else if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') {
            	winner = 2;
            	return winner;
            	}
            			
	else if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X') {
            	winner = 2;
           	return winner;
       		}
            	
    	
    // Checks columns
    	/* Player 1 wins */	
       	if (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') {
            	winner = 1;
            	return winner;
            	}
            			
       	else if (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') {
            	winner = 1;
            	return winner;
            	}
            			
      	else if (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') {
            	winner = 1;
            	return winner;
            	}
    	/* Player 2 wins */
        else if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') {
            	winner = 2;
            	return winner;
            	}
            			
        else if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') {
            	winner = 2;
            	return winner;
            	}
            			
        else if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') {
            	winner = 2;
      		return winner;
            	}
            		
      	
        	
    // Checks Diagonals   			
      	/* Player 1 wins */
       	if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') {
            	winner = 1;
            	return winner;
            	}
            		
       	else if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O') {
            	winner = 1;
            	return winner;
            	}
       	/* Player 2 wins */
       	else if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') {
            	winner = 2;
            	return winner;
            	}
            			
       	else if (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X') {
            	winner = 2;
            	return winner;
            	}

    	
    return winner;
}

/* Check for the end of game */
bool check_end_of_game(char a[SIZE][SIZE])
{
	bool end = false;
	int win;
	
	win = check_three_in_a_row(a);
	
	switch (win) {
			
		case 1: end = true;
			return end;
		
		case 2: end = true;
			return end;
			
		default:end = false;
			break;
		}
		
	if (check_table_full(a) == true) {
		end = true;
		return end;
		}
	else {
		return end;
		}
	
}

/* Get player 1's move */
void get_player1_move(char a[SIZE][SIZE], int x, int y)
{
	int row, col;
	bool ok;
	
	printf("Player 1 enter your selection [row, col]: ");
	scanf("%d,%d", &row, &col);
	
	row--;
	col--;
	
	ok = check_legal_option(a, row, col);
	
	while (ok == false) {
		printf("Player 1 enter your selection [row, col]: ");
		scanf("%d,%d", &row, &col);
	
		row--;
		col--;
	
		ok = check_legal_option(a, row, col);
		}
		
	update_table(a, row, col, 'O');
	
	display_table(a);
		
	
	return;
}
	
	
		
/* Print Winner */
void print_winner(char a[SIZE][SIZE])
{
	int winner;
	
	winner = check_three_in_a_row(a);
	
	switch(winner) {
		case 1: printf("Congratulations, Player 1 wins!\n");
			break;
			
		case 2: printf("Congratulations, Player 2 wins!\n");
			break;
			
		default:printf("Game over, no player wins.\n");
			break;	
	}
	
	return;
}
    



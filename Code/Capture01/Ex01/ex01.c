/*
 *CAndPointer ex1.1
 *This program gets input chars from standard I/O,and prints the input through standard I/O
 *Every input line follows a line which is the part of its input
**
**The 1st line of input is a string of column's number ,ends with a negative number
**These numbers are coupled to show arrange of I/O
 *Example: 4 9 means print the input string form column 4 to 9
**The first column is 0
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_COLS 20   //the max column number we can deal with
#define MAX_INPUT 1000	//the max input column number

int read_column_numbers( int column[], int max );
void rearrange( char *output, char const *input, int n_columns, int const colnums[] );

int main( void ){

	int n_column; //the number of column is dealing  with
	int columns[MAX_COLS]; //the number of columns needs to deal with
	char input[MAX_INPUT]; //the max number of line can be dealed
	char output[MAX_INPUT]; //the max of output

	// get current column number	
	n_columns = read_column_numbers( columns, MAX_COLS );

	//




	
} 

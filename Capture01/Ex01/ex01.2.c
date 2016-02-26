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

	int n_columns; //the number of column is dealing  with
	int columns[MAX_COLS]; //the number of columns needs to deal with
	char input[MAX_INPUT]; //the max number of line can be dealed
	char output[MAX_INPUT]; //the max of output

	// get current column number	
	n_columns = read_column_numbers( columns, MAX_COLS );

	//read,deal and print last input
#if 0
	while(gets( input ) != NULL){
		printf("Original input : %s\n",input);
		rearrange( output, input, n_columns, columns);
		printf("Rearranged line: %s\n",output);
	}
#endif

	return EXIT_SUCCESS;

}

/*
 *get the rangement of the column, ignore the overflued value
 * 
 */
int read_column_numbers( int columns[], int max ){
	int num = 0;
	int ch;

	//get column,end with negative number
	while( num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0){
		num += 1;
	}

	//check the number are coupled
	if( num % 2 != 0 ){
		puts("Last column number is not paired.");
		exit( EXIT_FAILURE );
	}

	//abonden the unusefuled part
	while((ch = getchar()) != EOF && ch != '\n');

	return num;
}

/*
 *deal with the input and link the chars ,ending it with NUL
 *
 * */
void rearrange( char *output, char const *input, int n_columns, int const columns[] ){
	
	int col; //column pointer
	int output_col; //output columns counter
	int len; //length of input 

	len = strlen( input );
	output_col = 0;

	//operate coupled columns
	for( col =0; col < n_columns; col +=2 ){
		int nchars = columns[col + 1] - columns[col] + 1;

		//end it up if input line is ended or output line is fulled
		if( columns[col] >= len || output_col == MAX_INPUT - 1) break;

		//abonden voerflow part
		if( output_col + nchars > MAX_INPUT - 1 )
			nchars = MAX_INPUT - output_col - 1;

		//copy data
		strncpy( output + output_col, input + columns[col], nchars );
		output_col += nchars;
	}
	output[output_col] = '\0';
}









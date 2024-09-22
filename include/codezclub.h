/*	File: CodezClub\
*	Author: Njabulo Sibiya
*	Date: 25 August 2024
* 
*	Summary:
*	This file is for practice problems found in the website
*	codezclub.com
*/


namespace cclub {
	// Multiplies 2 numbers (added by user together
	signed long product(signed long value_1, signed long value_2);
	
	/* Promts user to enter a number then, that number is then printed to screen*/
	void printNumber();

	// Prompts user to enter 2 numbers which are then added together and the results printed
	signed long addition();

	// Prompts user to enter 2 numbers, the numerator and denominator then prints out the quotient of the results
	void divisionWithRemainder();

	// Prompts user to enter 2 numbers then prints those numbers swapped! 
	// The printed numbers are swapped, not the variables
	void swapNumbers();

	// Finds the size of the following data types and prints them to console:
	// int, float, double & char
	void findSizeOf();

	// Returns the ASCII value of any character entered by user (Limited to unicode only)
	int printASCII();

	// Generates a random number between 0 & 100
	int randomNumber();
}
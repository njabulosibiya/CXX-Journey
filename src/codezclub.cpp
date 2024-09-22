#include "codezclub.h"

#include <iostream>

// For randomNumber() method
#include <cstdlib>
#include <ctime>



signed long cclub::product(signed long value_1, signed long value_2) {
	return (value_1 * value_2);
}

void cclub::printNumber() {
	std::cout << "Enter a number: ";
	
	signed long number(0);
	std::cin >> number;

	std::cout << number << std::endl;
}

signed long cclub::addition() {
	std::cout << "Enter 2 numbers to add: ";

	signed long number1(0), number2(0);
	std::cin >> number1 >> number2;

	return (number1 + number2);
}

void cclub::divisionWithRemainder() {
	std::cout << "Enter numerator followed by denominator: ";
	int numerator(0), denominator(0);
	std::cin >> numerator >> denominator;

	int quotient(numerator / denominator);

	if ((numerator % denominator) == 0) {
		std::cout << numerator << "/" << denominator << " = " << quotient;
	}
	else {
		std::cout << numerator << "/" << denominator << " = " << quotient << "." << (numerator % denominator) << std::endl;
	}
}

void cclub::swapNumbers() {
	std::cout << "Enter 2 numbers: ";

	long number1(0), number2(0);
	std::cin >> number1 >> number2;

	// Before swap
	std::cout << "Number 1: " << number1 << "\nNumber 2: " << number2 << std::endl;
	
	number1 = (number1 + number2);
	number2 = (number1 - number2);
	number1 = (number1 - number2);

	// After swap
	std::cout << "\nNumber 1: " << number1 << "\nNumber 2: " << number2 << std::endl;


}

void cclub::findSizeOf() {
	std::cout << "The size of integer: " << sizeof(int) << std::endl;
	std::cout << "The size of integer: " << sizeof(char) << std::endl;
	std::cout << "The size of integer: " << sizeof(float) << std::endl;
	std::cout << "The size of integer: " << sizeof(double) << std::endl;
}

int cclub::printASCII() {

	std::cout << "Enter any letter, number or symbol (only 1): ";
	char letter(0);
	std::cin >> letter;

	int let(letter);

	return let;
}

int cclub::randomNumber() {
	// This is commented out because when method is called within a loop
	// it will generate the same number for the number of times it loops
	// This brings another question, why do we have to seed when we can get numbers without 
	// doing so?
	//std::srand(std::time(0)); // Seed random number generator with current time

	return std::rand()%100; // Get random number between 0 & 100
	// This brings the question, what is a seed in programming?
}
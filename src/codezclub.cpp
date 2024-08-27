#include <iostream>
#include "codezclub.h"

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
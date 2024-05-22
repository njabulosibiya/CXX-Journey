/*
*
*
*
*
*
*/

#ifndef FUNCTIONLIST_H
#define FUNCTIONLIST_H

#include <iostream>
#include "functions.h"

//lists all funtions available to be selected by the user.
void listOfFunctions() {
    std::cout << "Available functions: \n"
            << "1 - UserInput(): prompts user to enter number then returns it.\n"
            << "2 - addition(): prompts user to enter 2 numbers then returns answer.\n"
            << "3 - quotientAndRemainder(): Finds the quoteint and remainder of the division of 2 numbers. " 
                "Quotient and remainder are returned seperately.\n"
            << "4 - getCharecter(): prompts user to enter 2 numbers then returns answer.\n" 
            << "5 - getASCIIValueOfString(): Returns the ASCII value of any charecter enter.\n"
            << "6 - getRandomNumber(): Finds random number\n"
            << "7 - findSizeOf(): returns the size of int, float, double & char types\n"
            << "8 - multiplyTwoNumbers()\n"
            << "9 - swapNumbers(): swaps 2 numbers without using a variable\n"
            << "10 - quotientAndRemainder(): Finds the quoteint and remain\n"
            << "11 - quotientAndRemainder(): Finds the quoteint and remain\n"
            << "12 - quotientAndRemainder(): Finds the quoteint and remain\n"
            << "13 - quotientAndRemainder(): Finds the quoteint and remain\n"
            << "14 - quotientAndRemainder(): Finds the quoteint and remain\n"
            << "15 - quotientAndRemainder(): Finds the quoteint and remain\n"
            << "16 - quotientAndRemainder(): Finds the quoteint and remain\n"
            << "17 - quotientAndRemainder(): Finds the quoteint and remain\n"
            << "18 - quotientAndRemainder(): Finds the quoteint and remain\n" << std::endl;

    //block scope function for selecting and calling functions
    {
        std::cout << "Enter number of the function you want to user: ";
        int functionNumber(0);
        std::cin >> functionNumber;
        
        switch (functionNumber)
        {
        case 1:
            std::cout << "userInput() selected\n";
            userInput();
            break;
        case 2:
            std::cout << "addition() selected\n" << addition();
            break;
        case 3:
            std::cout << "quotientAndRemainder() selected\n"; 
            quoteintAndRemainder();
            break;
        case 4:
            std::cout << "getCharecter() selected\n" << getCharecter();
            break;
        case 5:
            std::cout << "getASCIIValueOfString() selected\n"; 
            getASCIIValueOfString();
            break;
        case 6:
            std::cout << "getRandomNumber() selected\n";
            getRandomNumber();
            break;
        case 7:
            std::cout << "findSizeOf() selected\n"; 
            findSizeOf();
            break;
        case 8:
            std::cout << "multiplyTwoNumbers() selected\n" << multiplyTwoNumbers();
            break;
        case 9:
            std::cout << "swapNumbers() selected\n";
            swapNumbers();
            break;
        default:
        std::cerr << "Number out of scope.";
            break;
        }
    }
}

#endif //FUNCTIONLIST_H
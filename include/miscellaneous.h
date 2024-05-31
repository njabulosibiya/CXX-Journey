/*File: functions.h
*
* Author: Njabulo Sibiya (75039043+njabulosibiya@users.noreply.github.com)
* Date : 03 Feb 2023
* Project: cpp practice
*
* File Summary:
*   Includes functions not related to any website or project, just regular code I came up with.
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <ctime>
#include <cstdlib>

// Collection of miscellaneous functions using pointers & reference variables.
namespace point_ref {
    // Basic reference variable usage
    template <typename Type>
    Type basicRef(Type& ogVariable, Type& refVariable) {
        return ogVariable + refVariable;
    }
}

//1
//prints number entered by user
void userInput() {
    std::cout << "Enter any number: ";
    int input(0);
    std::cin >> input;
    std::cout << "Your number: " << input << std:: endl;
}
//prints number entered by user.
int userInput(int userNumber) {
    return userNumber + 1;
}

//2
//prompts user for 2 numbers the returns their sum
int addition() {
    std::cout << "Enter 2 numbers: ";
    int number1(0), number2(0);
    std::cin >> number1 >> number2;

    return (number1 + number2);
}
//passed 2 numbers and returns their sum
int addition(int number1, int number2) {
    return (number1 + number2);
}

//3
//Finds the quoteint and remainder of the division of 2 numbers. Quotient and remainder are returned seperately
void quoteintAndRemainder() {
    std::cout << " Enter numerator: ";
    int numerator(0);
    std::cin >> numerator;
    std::cout << "Enter denominator: ";
    int denominator(0);
    std::cin >> denominator;

    std::cout << "Quotient: " << numerator/denominator << std::endl;
    std::cout << "Remainder: " << numerator % denominator << std::endl;
}
//Finds the quoteint and remainder of the division of 2 numbers passed into function. Quotient and remainder are returned seperately
void quoteintAndRemainder(int numerator, int denominator) {
    std::cout << "Quotient: " << numerator / denominator << std::endl;
    std::cout << "Remainder: " << numerator % denominator << std::endl;
}

//4
//returns a charecter when a number is input into the program
char getCharecter() {
    std::cout  << "Enter a number between 0-250: ";
    int charNumber(0);
    std::cin >> charNumber;
    
    return charNumber;
}
//passes number(ASCII Value), then returns corresponding charecter
char getCharecter(int asciiValue) {
    return asciiValue;
}

//5
//returns the ASCII value of any charecter enter.
int getASCIIValueOfString() {
    std::cout << "Enter any char: ";
    char chare(0);
    std::cin >> chare;

    return int(chare);
}
int getASCIIValueOfString(char charecter) {
    return int(charecter);
}

//6
//generates a random number
void getRandomNumber() {
    srand((unsigned)time(0));//seeds random number, links with time.
    for(int i(0); i < 5; i++) {
        std::cout << rand()%100 << std::endl;
    }
}
void getRandomNumber(int amount) {
    srand((unsigned)time(0));//seeds random number, links with time.
    for(int i(0); i < amount; i++) {
        std::cout << rand()%100 << std::endl;
    }
}

//7
//finds the size of int, float, double & char types
void findSizeOf() {
    std::cout << "Size of int: " << sizeof(int) << std::endl
            << "Size of char: " << sizeof(char) << std::endl
            << "Size of float: " << sizeof(float) << std::endl
            << "Size of double: " << sizeof(double) << std::endl;
}

//8
int multiplyTwoNumbers() {
    std::cout << "Enter 2 numbers: ";
    short number1(0), number2(0);
    std::cin >> number1 >> number2;

    return number1*number2;
}
int multiplyTwoNumbers(short number1, short number2) {
    return number1*number2;
}

//9
//swaps 2 numbers without using a variable
void swapNumbers() {
    std::cout << "Enter 2 numbers: ";
    short number1(0), number2(0);
    std::cin >> number1 >> number2;

    std::cout << "The numbers before swapping: " << number1 << " " << number2 << std::endl;

    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    std::cout << "The numbers after swapping: \nnumber1: " << number1 << "\nnumber2: " << number2 << std::endl;
}
void swapNumbers(short number1, short number2) {
    std::cout << "The numbers before swapping: " << number1 << " " << number2 << std::endl;

    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    std::cout << "The numbers after swapping: \nnumber1: " << number1 << "\nnumber2: " << number2 << std::endl;
}

//10
void getSumAndAvarage() {
    std::cout << "Enter 3 numbers: ";
    int number1(0), number2(0), number3(0);
    std::cin >> number1 >> number2 >> number3;

    int sum = number1 + number2 + number3;
    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The Avarage is: " << sum/3 << std::endl;
}

//11

//12

//13

//14

//15

//16

//17

//18

//19

//20

//21

//22

//23

//24

//25

//26

//27

//28

//29

//30

//31

//32

//33

//34

//35

//36

//37

//38

//39

//40

//41

//42

//43

//44

//45

//46

//47

//48

//49

//50

/////////////////////


#endif //FUNCTIONS_H
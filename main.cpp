/*
* Author: Njabulo Sibiya (75039043+njabulosibiya@users.noreply.github.com)
* Date: 03 Feb 2023
* Project: Cpp practice
*
* File Summary: 
*   This is where I practice and grow my C++ & CMake skills. A safe space where I can experiment 
*   & do whatever. It isn't a program or application, but a collection of functions, namespaces & 
*   classes of solutions to problems & excises from sites i.e. Leetcode, Codewars, HackerRank & 
*   the like.
* 
*/

#include <iostream>
#include "interface.h"
#include "data-structures/basic_classes.h"
#include "codezclub.h"

int main() {

    bool tryAgain(false);
    do {
        std::cout << "Generating 10 random numbers: ";

        for (unsigned short i = 0; i < 10; i++) {
            std::cout << cclub::randomNumber() << std::endl;
        }

        std::cout << "\nTry Again? ";
        std::cin >> tryAgain;
    } while (tryAgain == true);

    return 0;
}

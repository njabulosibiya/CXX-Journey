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
    using basicc::Student;
    Student student("class");

    std::cout << student.className() << std::endl;

    std::cout << "ENTER 2 VALUES(SPACE SEPERATED): "; 
    
    signed long value1(0), value2(0);
    std::cin >> value1 >> value2;

    std::cout << "RESULTS: " << cclub::product(value1, value2) << std::endl;

    return 0;
}

/*  File: main.cpp
* 
* Author: Njabulo Sibiya (75039043+njabulosibiya@users.noreply.github.com)
* Date: 03 Feb 2023
* 
* Project: Cpp practice
* 
* Dependencies: none
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
#include "pointers.h"

int main() {

    BasicPointers me;

    int a[4] = { 34,46,256,56 };

    std::cout << me.getValueInArray(a, 4, 56);


    return 0;
}

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

void test(int* a);

int main(int argc, char* argv[]) {

    BasicPointers pointer;
    // int side
    int a[4] = { 34,46,256,56 };

    pointer.mainParamManip(argc, argv);

    return 0;
}

void test(int *a) {
    int* pa(a);
    int* iPArray[] = { pa };
    int** iPPArray[] = { iPArray };

    // char side
    char name[] = "njabulo";
    char* cSArray[] = { name, "Kwanele", "dadarkfather" };
}
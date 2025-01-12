#ifndef POINTERS_H
#define POINTERS_H 

#include <string>
#include <iostream>
/* FILE:	Pointers.h
*  Project:	C++ Practice
*  Date:	07 December 2025
*  Dependency:	None
* 
*  Summary:
*	This interface file is one that facilitates learning, understanding, & working with
*	and manipulation of pointers.
*/

class BasicPointers {
public:
	// Constructors
	BasicPointers();

	// Destructor
	// Learn how to work with destructors for not only normal variables but also for pointers

	// Methods / Functions 
	// Pointing to basic variable, dereferencing pointer
	void basicPointerManipulation(int ip = 0, std::string sp = "null", const int cip = 0);

	// Practice for passing arrays into functions
	// Passed information about a pointer then with provided information returns the value withing the array.
	// Returns 0 if no matching value was found.
	// Returns value at if only position is provided whilst value is at its default.
	int getValueInArray(int* array, short int size, int value = 0, int position = 0) const;

	/**********************************************************/
	// Dynamic pointers / Dynamic memory allocation
	void dynamicAllocation();

	// Advanced
	// The following methods work with pointers to pointers to pointers etc..
	// Methods with pointer & reference return types, their uses and manipulation
	// 

private:
	int* m_intPointer;
	std::string* m_stringPointer;
	const int* m_constIntPointer;
	int* const m_intPointerConst;
};


#endif // POINTERS_H
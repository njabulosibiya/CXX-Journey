/* FILE:	Pointers.h
*  Project:	C++ Practice
*  Date:	07 December 2025
*  Dependency:	None
*
*  Summary:
*	This interface file is one that facilitates learning, understanding, & working with
*	and manipulation of pointers.
*/

#ifndef POINTERS_H
#define POINTERS_H 

#include <string>
#include <iostream>
#include <cstring>

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

	enum Operation { 
		Addition, 
		Indexing, // printing out elemennts in array using point arithmetics
		Increment 
	};
	// Pointer arithmetics, operations performed using pointers.
	// Can perform operations on pointers themselves using addressed.
	// Performs arithmetics on the memory addresses themselves.
	void pointerArithmetics(Operation operation);

	enum Param {
		First, // Uses first method of passing parameter
		Second, // Uses second method of passing parameter
	};
	// The 2 ways of passing an array into a function.
	// last array is optional
	void passingArrayAsParam(int array[], Param type, int* array2 = NULL);

	// Pointers to Pointers to Pointers to...
	void pointersToPointers();


	// Arrays & C Strings

	// Basic C-String
	void basicCString();

	// In this function we try to understand the workings of a C-String & an array of pointers...
	// An aspect that I am struggling to understand is, are C-Strings considered arrays or pointers
	// Seem silly, I get the impressiong that it is both considering how arrays work for other data type.
	void BasicPointers::workingWithCStrings(char* a, char* arg[], int* intPointer, int* intArray[]);

	/*Using main method arguments, seperates directory of main binary/executable into array & prints content 
	out individually then as a directory path*/
	void mainParamManip(int argc, char** argv);


	/**********************************************************/
	// Dynamic pointers / Dynamic memory allocation
	void dynamicAllocation();

	/**********************************************************/
	// A look at Deep vs Shallow copying
	void deepShallowCopyOverview();

private:
	int* m_intPointer;
	std::string* m_stringPointer;
	const int* m_constIntPointer;
	int* const m_intPointerConst;
	int z[6] = { 34,35,11,56,24,53 };

};


#endif // POINTERS_H
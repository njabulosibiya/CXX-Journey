#include "pointers.h"

// global variables & pointers for use within functions
int* p;

BasicPointers::BasicPointers() 
	: m_intPointer(NULL), m_stringPointer(NULL),
m_constIntPointer(NULL), m_intPointerConst(NULL)
{ }


void BasicPointers::basicPointerManipulation(int ip, std::string sp, const int cip) {
	std::cout << "initializing pointers...\n";
	m_intPointer = &ip;
	
	if (ip == 0)
		std::cout << "invalid";
	else {
		std::cout << "intialized m_int_pointer...\n"
			<< "Address: " << m_intPointer << "\nValue @ Address: " << *m_intPointer << std::endl;
	}

	{
		int a(0);
		int b(0);
		int* pa(&a);
		int* pb(&b);

		std::cout << *(&a) << std::endl; // derefernce address of a.
	}
}

int BasicPointers::getValueInArray(int* array, short int size, int value, int position) const {
	std::cout << array << std::endl; // printing the array itself without any position, what will be printed?
	std::cout << &array[0] << std::endl; // Gives same address as above, as this is the beginning of array..

	if (value != 0) {
		if (position != 0) {
			return (value == array[position - 1]) ? value : 0;
		}
		else {
			for (int i(0); i < size; i++) {
				if (value == array[i]) {
					std::cout << "Index: " << i << "\nValue: " << value << std::endl;
					return value;
				}
			}
			return 0;
		}
	}
	else if (value == 0 && position != 0) {
		return array[position - 1];
	}
	else
		return 0;
} // end getValueInArray()


void BasicPointers::dynamicAllocation() {
	static int numOfElements = 0; // Resets on every function call;

	m_intPointer = new int; // what even is this? why?

}
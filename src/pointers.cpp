#include "pointers.h"

// global variables & pointers for use within functions
int* p;

BasicPointers::BasicPointers() : m_intPointer(NULL), m_stringPointer(NULL), m_constIntPointer(NULL), m_intPointerConst(NULL){ 

}

void BasicPointers::basicPointerManipulation(int ip, std::string sp, const int cip) {
	std::cout << "initializing pointers...\n";
	m_intPointer = &ip;// useless as function goes out of scope, pointer points to null
	
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
	std::cout << *array << std::endl; // printing the array itself without any position, what will be printed?
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
	if (value == 0 && position != 0) {
		return array[position - 1];
	}
	else
		return 0;
} // end getValueInArray()

void BasicPointers::pointerArithmetics(Operation operation) {
	int x(20);
	int y(40);

	int* px(&x);
	int* py(&y);
	int* paz(z);

	switch (operation) {
	case 0: // Addition
		std::cout << "x: " << x << "y: " << y << std::endl;
		std::cout << "Addition using pointers: " << *px + *py << std::endl; // Same as x + *py

		std::cout << "Address of x: " << px << " || Address of y: " << py << std::endl;
		std::cout << "Address + 1... x: " << px + 1 << " || y: " << py + 1 << std::endl;

		// The following code tries to initialized a pointer to the value of a memory address obtained through pointer arithmetics
		// The problem here is that as much as I can specify the memory address, there is not much i can do about it as there is 
		// no way to store data on the memory address itself without a variable;
		{
			int* pma(&x + 1);
		}
		break;

	case 1: // Array indexing on pointer arithmetics

		{ // prints out values and addresses of array using the array itself
		std::cout << "USING ARRAY...\n";
			std::cout << "Array Z Memory Addresses = { ";
			for (int i(0); i < 6; i++) {
				std::cout << z + i << ", ";
			}
			std::cout << "}" << std::endl;

			std::cout << "Array Z Values = { ";
			for (int i : z) {
				std::cout << i << ", ";
			}
			std::cout << "}" << std::endl;
		}

		{ // Prints values & memory addresses of array using pointer to array.
			std::cout << "----------------------\nUSING POINTER TO ARRAY...\n";
			std::cout << "Array Z Memory Addresses = { ";
			for (int i = 0; i < 6; i++) {
				std::cout << paz + i << ", ";
			}
			std::cout << "}" << std::endl;

			std::cout << "Array Z Values = { ";
			for (int j = 0; j < 6; j++) {
				std::cout << *(paz + j) << ", ";
			}
			std::cout << "}" << std::endl;

		}
		std::cout << "Z address(paz[3]): " << paz[3] << " || value (*paz): " << *(paz + 3) << std::endl;
		break;

	case 2: // Increment
		std::cout << "X = " << x << " || Y = " << y << " || z[1] = " << z[1] << std::endl;
		x = x + *py++;
		std::cout << "x = x + *py++ gives... " << x << "no affect\n";

		// However if we increment on the memory address of the array instead
		paz = paz + 2; // now points to second item of array. works
		// paz = *(paz++) does not work
		std::cout << "*paz = " << *paz << "\nChanged since we incremented address stored in pointer paz" << std::endl;

		break;
	default:
		std::cout << "out of scope!";
	}
}

void BasicPointers::passingArrayAsParam(int array[], Param type, int* array2) {
	switch (type) {
	case 0: // Uses first param
		std::cout << "passing as array: ";
		for (int i = 0; i < 6; i++) {
			std::cout << array[i] << ", ";
		}
		break;
	case 1: // Uses second param
		std::cout << "passing as pointer: ";
		for (int j = 0; j < 6; j++) {
			std::cout << array[j] << ", ";
		}
		break;
	default:
		std::cout << "Invalid option" << std::endl;
	}
}

void BasicPointers::pointersToPointers() {
	int something(43);
	int someArray[4] = { 34, 543, 354, 9 };
	
	int* pointer(0);
	int** pointer2(0);
	int*** pointer3(0);

	
	pointer = &something;
	pointer2 = &pointer;
	pointer3 = &pointer2;

	std::cout << "Pointers after assignment: \n"
		<< "Address of pointer: " << &pointer << " || Dereference: " << *pointer << " || Stored Address: " << pointer << std::endl
		<< "Pointer Address: " << &pointer2 << " || Pointed Value: " << **pointer2 << " || Pointed Address: " << pointer2 << std::endl
		<< "Pointer Address: " << &pointer3 << " || Pointed Value: " << *pointer3 << " || Pointed Address: " << pointer3 << std::endl;

	{
		pointer = someArray;
		
		something = *pointer; // something = 34
		std::cout << "something: " << something << std::endl;
		something = **pointer2;

		something = *(*pointer2 + 1); // something = 543
		std::cout << something;
	}
}

void BasicPointers::workingWithCStrings(char* a, char* arg[], int* intPointer, int* intArray[]) {
	
	std::cout << "Lets get all our variables sorted out! \n";
	std::cout << "C-String: " << a << std::endl;
	std::cout << "Array of pointers (de-dereferenced): ";
	for (int i = 0; i < 3; i++) {
		std::cout << arg[i] << " ";
	}
	std::cout << "\nInteger Poiner Stored Address: " << intPointer << " | Dereferenced: " << *intPointer << std::endl;
	std::cout << "Integer Array elements (de-dereferenced): ";
	for (int j = 0; j < 3; j++) {
		std::cout << intArray[j] << " ";
	}
}

void BasicPointers::basicCString() {
	
	{ // Lets demistify the nature of c-strings
		// Outputs the name as it is, so it bahaves more like a var, than an array
		char name[] = "Njabulo";
		std::cout << name;

		// Now lets add a pointer.
		char* charPointer(name);
		std::cout << "char pointer: " << charPointer << std::endl;

		//workingWithCStrings(name);
	}
}

void BasicPointers::mainParamManip(int argc, char** argv) {
	/* section does not work due to data corruption when copying *arg[0] to c-string var char*
	char* seperated[] = { "initialize" };
	
	char selector(NULL);
	char temp[] = { NULL };
	int argVIterator(0), tempCounter(0), seperatedCounter(0);

	while (selector != '\0') {
		selector = *argv[argVIterator];
	}*/

	// Part 1
	{
		// what got passed into the main program?
		std::cout << "argc: " << argc << std::endl;
		std::cout << "argv: ";
		char first[] = { NULL };
		for (int j = 0; j < argc; j++) {
			std::cout << argv[j];
		}
	}

	// Part 2:
// Trying to initialized a varible with the data from the array
	{
		// argv[i] dereferences the variable at the first level and returns that data, the address of the beginning of the c-string
		char temp[] = { NULL };
		temp[0] = *argv[0]; // dereferences array & dereferences pointer in arrays first index

		std::cout << "Temp: " << temp[3] << std::endl;
		//char temp2[] = { NULL };
		//temp2[0] = *argv[0]; // does not work argv[0] = *argv first index && *argv[0] = *(arg[0]) = *(*arg) -> **arg[0] = ***arg which does not exist
	}
}


/*======================================================================== DYNAMIC MEMORY ALLOCATION
/*========================================================================*/
/*========================================================================*/
void BasicPointers::dynamicAllocation() {
	{// Phase 1, the failiure of array wihout const / static sizes
		int array[3] = { 34,45,64 };
		std::cout << "Array before delete: ";
		for (int i : array)
			std::cout << i << " ";

		std::cout << "Array after delete: ";
		for (int i : array)
			std::cout << i << " ";

	}

	{// new & delete operators
		int* int1 = new int; // Returns a pointer to an int. int* = *
		long* long1 = new long;
		signed long* long2 = new signed long;
		int size(4);
		int* intArray1 = new int[size]; // allowed. Returns a pointer to an int array. int* = *

		char* char1 = new char[9]; // we hv char pointer & returns a pointer that points to char mem addr.
		char a[6];
		//char* so = new char*[9];// ERROR: returns pointer to char pointer char* = **
		char** char2 = new char*[20];// returns a pointer to a char pointer. char** = ** -> 20 is the size of char** (array of pointers)
		int** int2 = new int*; // Returns a pointer to an int pointer. int** = **
		char*** char3 = new char**; // An array of an array of pointer. char*** = ***

		// delete: return memory to heap
		delete int1;
		delete [] char1;
		delete long1;
		delete long2;
		delete [] intArray1;
		delete [] char2;
		delete int2;
		delete char3;
	}



}
/*
* Created: 31/05/2024
* Author: Njabulo Sibiya
* 
* Summary:
* File use for learning working with classes, derivation, ADT's, polymorphism etc...
*/

#ifndef BASIC_CLASSES_H
#define BASIC_CLASSES_H

#include <iostream>
#include <string>

//basic class
namespace basicc {
	class Student {
	public:
		Student(std::string className);

		std::string className() const;
		//std::string yearStr() const;
		//std::string toString() const;

	private:
		//std::string m_name;
		std::string m_major;
		//unsigned long m_student_id;

	protected:
		//unsigned short m_year;
	};
}


#endif //BASIC_CLASSES_H
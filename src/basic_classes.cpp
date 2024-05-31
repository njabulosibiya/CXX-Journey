#include "data-structures/basic_classes.h"

basicc::Student::Student(std::string className): m_major(className){}

std::string basicc::Student::className() {
	return m_major;
}
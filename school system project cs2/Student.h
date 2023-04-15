#pragma once
#include "Person.h"
class Student :public Person
{
private:
	double marks;

public:
	double getMarks();
	void setMarks(double marks);
	void work();
};


#pragma once
#include "Person.h"
class Teacher :public Person
{
private:
	double salary;
public:
	double getSalary();
	void setSalary(double salary);
	void work();
	

};


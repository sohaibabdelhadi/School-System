#pragma once
#include "Student.h"
#include"Teacher.h"
#include <iostream>
using namespace std;
class School
{
private:
	string name;
	Student student[100];
	Teacher teacher[100];
	
	
	int studentCounter, TeacherCounter;
public:
	void addStudent();
	void addTeacher();
	void editStudent();
	void searchStudentById();
	void editTeacher();
	void searchTeacherById();
	void getPersonData(string& name, int& age);
	School();
};


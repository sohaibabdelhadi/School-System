#include "School.h"


void School::getPersonData(string& name, int& age) {
	cout << "Name: ";
	cin.ignore();
	getline(cin,name);
	cout << "age: ";
	cin >> age;
}
void School::addStudent() {
	string name;
	int age;
	double marks;
	getPersonData(name,age);
	cout << "Marks: ";
	cin >> marks;
	student[studentCounter].setName(name);
	student[studentCounter].setAge(age);
	student[studentCounter].setMarks(marks);
	cout << "student has been added with id " << student[studentCounter].getId() << endl;
	studentCounter++;
}

void School::editStudent() {
	int id;
	cout << "please enter student Id: ";
	cin >> id;
	string name;
	int age;
	double mark;
	int option;
	

	for (int i = 0; i <studentCounter; i++) {
		if (student[i].getId() == id) {
			cout << "1- to edit name\n";
			cout << "2- to edit age\n";
			cout << "3- to edit mark\n";
			cin >> option;
			switch (option) {
			case 1:
				cout << "enter new name: ";
				cin >> name;
				student[i].setName(name);
				
				return;
			case 2:
				cout << "enter new age: ";
				cin >> age;
				student[i].setAge(age);
				
				return;
				
			case 3:
				cout << "enter new mark: ";
				cin >> mark;
				student[i].setMarks(mark);
				
				return;
			default:
				
				return;
				
			}
		}
	

	}
}


void School::searchStudentById() {
	int id;
	cout << "enter student Id: ";
	cin >> id;
	for (int i = 0; i < studentCounter; i++) {
		if (student[i].getId() == id) {
			cout << "student is found his name is: " << student[i].getName() << " and age is: " << student[i].getAge()<<" and mark is: "<<student[i].getMarks()<<endl;
			return;
		}
	}
	cout << "student is not found"<<endl;
	return;
}

void School::addTeacher() {
	string name;
	int age;
	double salary;
	getPersonData(name, age);
	cout << "salary: ";
	cin >> salary;
	teacher[TeacherCounter].setName(name);
	teacher[TeacherCounter].setAge(age);
	teacher[TeacherCounter].setSalary(salary);
	cout << "Teacher has been added with id " << teacher[TeacherCounter].getId() << endl;
	TeacherCounter++;
}

void School::editTeacher() {

	int id;
	cout << "please enter teacher Id: ";
	cin >> id;
	string name;
	int age;
	double salary;
	
	
	int option;
	for (int i = 0; i < TeacherCounter; i++) {
		if (teacher[i].getId() == id) {
			cout << "1- to edit name\n";
			cout << "2- to edit age\n";
			cout << "3- to edit mark\n";
			cin >> option;
			switch (option) {
			case 1:
				cout << "enter a new name: ";
				cin >> name;
				teacher[i].setName(name);
				return;
			case 2:
				cout << "enter a new age: ";
				cin >> age;
				teacher[i].setAge(age);
				return;

			case 3:
				cout << "enter a new salary: ";
				cin >> salary;
				teacher[i].setSalary(salary);
				return;
			default:
				return;

			}
		}

	}
	cout << "no student has this id" << endl;
	

}

void School::searchTeacherById() {
	int id;
	cout << "enter teacher id: ";
	cin >> id;
	for (int i = 0; i < TeacherCounter; i++) {
		if (teacher[i].getId() == id) {
			cout << "teacher is found his name is " << teacher[i].getName() << endl;
			return;
		}
	}
	cout << "teacher is not found" << endl;
	return;
}

School::School() {
	studentCounter =0;
	TeacherCounter =0;
}

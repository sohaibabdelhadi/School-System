#include "Person.h"


int Person::lastId = 0;
Person::Person() {
	id = lastId+1;
	lastId++;
}

void Person::setId(int id) {
	this->id = id;
}
void Person::setAge(int age) {
	this->age = age;
}
void Person::setName(string name) {
	this->name = name;
}

int Person::getId() {
	return id;
}
int Person::getAge() {
	return age;
}

string Person::getName() {
	return name;
}



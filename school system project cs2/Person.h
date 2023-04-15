#pragma once
#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
	int age, id;
	string name;
	static int lastId;
	
public:
	Person();
	int getId();
	void setId(int id);
	int getAge();
	void setAge(int age);
	string getName();
	void setName(string name);
	virtual void work() = 0;
	
};


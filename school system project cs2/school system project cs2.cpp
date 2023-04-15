

#include <iostream>
#include<iostream>
#include "Person.h"
#include"Teacher.h"
#include"Student.h"
#include"School.h";
using namespace std;

int main()
{
    School school;
   
    while (true) {
        cout << "=====================================" << endl;
        cout << "select an option from the list: \n";
        cout << "1-to add a student\n";
        cout << "2-to add a teacher\n";
        cout << "3-to edit a student\n";
        cout << "4-to edit a teacher\n";
        cout << "5-to search for a student by id\n";
        cout << "6-to search for a teacher by id\n";
        cout << "anything else to exit \n";
         
        int option; 
        cin >> option;
        switch (option)
        {
        case 1:
            system("cls");
            school.addStudent();
            break;
        case 2:
            system("cls");
            school.addTeacher();
            break;
        case 3:
            system("cls");
            school.editStudent();
            break;
        case 4:
            system("cls");
            school.editTeacher();
            break;
        case 5:
            system("cls");
            school.searchStudentById();
            break;
        case 6:
            system("cls");
            school.searchTeacherById();
            break;

        default:
            return 0;
        }
    }
   


}



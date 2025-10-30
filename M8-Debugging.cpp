// Kristoffer Carlino
// C++ 300
// Professor Dr. Robert Flowers
// Debugging Exercise Module 8

#include <iostream>
using namespace std;

// First class: Student
class Student {
public:
    string name;
    int age;

    void displayInfo() {
        cout << "Student Name: " << name << ", Age: " << age << endl;
    }
};

// Second class: Classroom
class Classroom {
public:
    Student student1;
    int roomNumber;

    void showClassroom() {
        cout << "Classroom Number: " << roomNumber << endl;
        student1.displayInfo();
    }
};

int main() {
    Classroom myClass;

    myClass.roomNumber = 101;
    myClass.student1.name = "Alex";
    myClass.student1.age = 19;

   
    myClass.displayClassroom();

    
    cout << "Total students: " << studentsCount << endl;

    return 0;
}

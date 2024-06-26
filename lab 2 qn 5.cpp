// Program to store the records of 5 students, where all students are of "2080" batch from "WRC".

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    static const int batchYear = 2080;
    static const string institution;

public:
    // Setter method to initialize the student data
    void setStudentData(string n, int roll) {
        name = n;
        rollNumber = roll;
    }

    
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Batch Year: " << batchYear << endl;
        cout << "Institution: " << institution << endl;
    }
};


const string Student::institution = "WRC";

int main() {
    Student students[5];
    string name;
    int rollNumber;

    
    for (int i = 0; i < 5; ++i) {
        cout << "Enter the name of student " << i + 1 << ": ";
        getline(cin, name);
        cout << "Enter the roll number of student " << i + 1 << ": ";
        cin >> rollNumber;
        cin.ignore(); 

        students[i].setStudentData(name, rollNumber);
    }


    for (int i = 0; i < 5; ++i) {
        cout << "\nStudent " << i + 1 << " details:" << endl;
        students[i].display();
    }

    return 0;
}

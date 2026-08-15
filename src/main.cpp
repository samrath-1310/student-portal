#include <iostream>
#include <string>
using namespace std;

void displayMenu() {
    cout << "\n------Student Portal--------"<<endl;
    cout << "1. View Student Information"<<endl;
    cout << "2. View Courses"<<endl;
    cout << "3. Exit"<<endl;
    cout << "Enter your choice: ";
}

void displayStudentInfo() {
    cout << "Student Information"<<endl;
    cout << "-------------------"<<endl;
    cout << "Name: Student User"<<endl;
    cout << "Student Rollno: STU101"<<endl;
    cout << "Program: Computer Science"<<endl;
    cout << "Semester: 1"<<endl;
    cout << "Email: student@students.iiit.ac.in"<<endl;
}

void displayCourses() {
    cout << "Enrolled Courses"<<endl;
    cout << "----------------"<<endl;
    cout << "1. Data Structures and Algorithms - 6 credits"<<endl;
    cout << "2. Software Systems Development - 4 credits"<<endl;
    cout << "3. Advanced Operating Systems - 4 credits"<<endl;
    cout << "4. Probability and Statistics - 2 credits"<<endl;
}

int main() {
    int choice;
    cout << "Welcome to the Student Portal!"<<endl;
    do {
        displayMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                displayStudentInfo();
                break;

            case 2:
                displayCourses();
                break;

            case 3:
                cout << "Exiting Student Portal."<<endl;
                break;

            default:
                cout << "Invalid choice. Please try again."<<endl;
        }
    } while (choice != 3);

    return 0;
}
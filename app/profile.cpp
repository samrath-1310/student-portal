#include <iostream>
#include <string>
using namespace std;

void displayProfile(const string& name, const string& program, int semester, const string& rollno, const string& email) {
    cout << "\n------Student Profile------"<<endl;
    cout << "Name: " << name << endl;
    cout << "Program: " << program << endl;
    cout << "Semester: " << semester << endl;
    cout << "Rollno.: " << rollno << endl;
    cout << "Email: " << email << endl;
}

void updateSemester(int& semester, int newSemester) {
    if (newSemester >= 1 && newSemester <= 4) {
        semester = newSemester;
        cout << "Semester updated successfully"<<endl;
    } 
    else {
        cout << "Invalid semester. Please enter a value from 1 to 4"<<endl;
    }
}

int main() {
    string name = "Student User";
    string program = "Computer Science";
    int semester = 1;
    string rollno = "STU101";
    string email = "student@students.iiit.ac.in";
    displayProfile(name, program, semester, rollno, email);

    int newSemester;
    cout << "\nEnter new semester: ";
    cin >> newSemester;
    updateSemester(semester, newSemester);

    cout << "\nUpdated Profile:"<<endl;
    displayProfile(name, program, semester, rollno, email);
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

void displayProfile(const string& name, const string& program, int semester) {
    cout << "\n------Student Profile------"<<endl;
    cout << "Name: " << name << endl;
    cout << "Program: " << program << endl;
    cout << "Semester: " << semester << endl;
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
    displayProfile(name, program, semester);

    int newSemester;
    cout << "\nEnter new semester: ";
    cin >> newSemester;
    updateSemester(semester, newSemester);

    cout << "\nUpdated Profile:"<<endl;
    displayProfile(name, program, semester);
    return 0;
}
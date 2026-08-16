#include <iostream>
#include <string>
using namespace std;

void displayProfile(const string& name, const string& program, int semester) {
    cout << "\n------Student Profile------"<<endl;
    cout << "Name: " << name << endl;
    cout << "Program: " << program << endl;
    cout << "Semester: " << semester << endl;
}

int main() {
    string name = "Student User";
    string program = "Computer Science";
    int semester = 1;
    displayProfile(name, program, semester);
    return 0;
}
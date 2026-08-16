#include <iostream>
#include <string>
using namespace std;

void displayDashboard(const string& studentName, int semester, double cgpa) {
    cout << "\n----Student Dashboard-----"<<endl;
    cout << "Student: " << studentName << endl;
    cout << "Semester: " << semester << endl;
    cout << "Current CGPA: " << cgpa << endl;
}

int main() {
    string studentName = "Student User";
    int semester = 1;
    double cgpa = 8.5;
    displayDashboard(studentName, semester, cgpa);

    return 0;
}
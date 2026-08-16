#include <iostream>
#include <string>
using namespace std;

void displayDashboard(const string& studentName, int semester, double cgpa) {
    cout << "\n----Student Dashboard-----"<<endl;
    cout << "Student: " << studentName << endl;
    cout << "Semester: " << semester << endl;
    cout << "Current CGPA: " << cgpa << endl;
}
void displayCourseSummary() {
    cout << "\n----Course Summary----"<<endl;
    cout << "Data Structues and Algorithms: In Progress"<<endl;
    cout << "Software Systems Development: In Progress"<<endl;
    cout << "Advanced Operating Systems: In Progress"<<endl;
    cout << "Probability and Statistics: Completed"<<endl;
}

int main() {
    string studentName = "Student User";
    int semester = 1;
    double cgpa = 8.5;
    displayDashboard(studentName, semester, cgpa);
    displayCourseSummary();

    return 0;
}
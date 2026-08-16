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
void displayAttendance() {
    int classesAttended = 45;
    int totalClasses = 48;
    double attendance = (classesAttended * 100.0) / totalClasses;

    cout << "\n----Attendance----"<<endl;
    cout << "Classes Attended: " << classesAttended << endl;
    cout << "Total Classes: " << totalClasses << endl;
    cout << "Attendance: " << attendance << "%"<<endl;
}
void displaySemesterProgress(int semester) {
    int totalSemesters = 4;
    double progress = (semester * 100.0) / totalSemesters;

    cout << "\n----Semester Progress----"<<endl;
    cout << "Current Semester: " << semester << endl;
    cout << "Program Progress: " << progress << "%"<<endl;
}

int main() {
    string studentName = "Student User";
    int semester = 1;
    double cgpa = 8.5;
    displayDashboard(studentName, semester, cgpa);
    displayCourseSummary();
    displayAttendance();
    displaySemesterProgress(semester);

    return 0;
}
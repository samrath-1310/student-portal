#include <iostream>
#include <string>
using namespace std;

bool validateLogin(const string& username, const string& password) {
    return username == "student" && password == "portal123";
}

int main() {
    string username;
    string password;
    cout << "---Student Portal Login---"<<endl;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (validateLogin(username, password)) {
        cout << "Login successful"<<endl;
    } else {
        cout << "Invalid username or password"<<endl;
    }

    return 0;
}
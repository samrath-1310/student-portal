#include <iostream>
#include <string>
using namespace std;

bool validateLogin(const string& username, const string& password) {
    return username == "student" && password == "portal123";
}

int main() {
    string username;
    string password;
    int attempts=0;
    int maxattempts=3;
    cout << "---Student Portal Login---"<<endl;
    while(attempts<maxattempts){
        cout << "Username: ";
        cin >> username;
        cout << "\nPassword: ";
        cin >> password;

        attempts++;
        if (validateLogin(username, password)) {
            cout << "Login successful"<<endl;
            return 0;
        } 
        
        cout << "Invalid username or password"<<endl;
        cout << "Attempts remaining: " << maxattempts - attempts <<endl;
    }
    cout << "\nMaximum login attempts reached"<<endl;
    return 0;
}
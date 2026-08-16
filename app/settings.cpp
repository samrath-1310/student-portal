#include <iostream>
#include <string>
using namespace std;

void displaySettings(bool notificationsEnabled, bool darkModeEnabled) {
    cout << "\n----Portal Settings----"<<endl;
    cout << "Notifications: " << (notificationsEnabled ? "Enabled" : "Disabled") << endl;
    cout << "Dark Mode: " << (darkModeEnabled ? "Enabled" : "Disabled") << endl;
}

int main() {
    bool notificationsEnabled = true;
    bool darkModeEnabled = false;

    displaySettings(notificationsEnabled, darkModeEnabled);

    return 0;
}
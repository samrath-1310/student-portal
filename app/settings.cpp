#include <iostream>
#include <string>
using namespace std;

void displaySettings(bool notificationsEnabled, bool darkModeEnabled) {
    cout << "----Portal Settings----"<<endl;
    cout << "Notifications: " << (notificationsEnabled ? "Enabled" : "Disabled") << endl;
    cout << "Dark Mode: " << (darkModeEnabled ? "Enabled" : "Disabled") << endl;
}
void toggleNotifications(bool& enabled) {
    enabled = !enabled;
}
void toggleDarkMode(bool& enabled) {
    enabled = !enabled;
}

int main() {
    bool notificationsEnabled = true;
    bool darkModeEnabled = false;

    cout << "\nCurrent Settings:"<<endl;
    displaySettings(notificationsEnabled, darkModeEnabled);

    toggleNotifications(notificationsEnabled);
    toggleDarkMode(darkModeEnabled);

    cout << "Settings after changes:"<<endl;
    displaySettings(notificationsEnabled, darkModeEnabled);

    return 0;
}
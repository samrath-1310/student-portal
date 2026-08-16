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

void displayLanguagePreference(const string& language) {
    cout << "Language: " << language << endl;
}

int main() {
    bool notificationsEnabled = true;
    bool darkModeEnabled = false;
    string language = "English";

    cout << "\nCurrent Settings:"<<endl;
    displaySettings(notificationsEnabled, darkModeEnabled);
    displayLanguagePreference(language);

    toggleNotifications(notificationsEnabled);
    toggleDarkMode(darkModeEnabled);

    cout << "Settings after changes:"<<endl;
    displaySettings(notificationsEnabled, darkModeEnabled);
    displayLanguagePreference(language);

    return 0;
}
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

void resetSettings(bool& notificationsEnabled, bool& darkModeEnabled, string& language) {
    notificationsEnabled = true;
    darkModeEnabled = false;
    language = "English";
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

    cout << "Resetting settings to default values."<<endl;
    resetSettings(notificationsEnabled, darkModeEnabled, language);

    cout << "Default Settings:"<<endl;
    displaySettings(notificationsEnabled, darkModeEnabled);
    displayLanguagePreference(language);

    return 0;
}
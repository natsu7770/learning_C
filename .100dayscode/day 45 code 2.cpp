#include <iostream>
#include <string>
#include <cctype>  // For isupper, islower, toupper, tolower

using namespace std;

int main() {
    string s;
    cin >> s;  // Read the input string
    
    // Loop through each character and toggle case
    for (char& c : s) {
        if (isupper(c)) {
            c = tolower(c);
        } else if (islower(c)) {
            c = toupper(c);
        }
        // Non-letters remain unchanged
    }
    
    cout << s << endl;  // Output the toggled string
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);  // Read first string
    getline(cin, s2);  // Read second string
    
    if (s1.length() != s2.length()) {
        cout << "Not rotation" << endl;
        return 0;
    }
    
    string concatenated = s1 + s1;
    if (concatenated.find(s2) != string::npos) {
        cout << "Rotation" << endl;
    } else {
        cout << "Not rotation" << endl;
    }
    
    return 0;
}

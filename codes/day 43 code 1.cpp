#include <iostream>  // Standard input/output library

using namespace std;  // Allows use of std:: without prefix

int main() {
    // Loop and print numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
#include <iostream>  // Standard input/output library

using namespace std;  // Allows use of std:: without prefix

int main() {
    // Attempt to loop and print numbers from a range (e.g., 1 to 10)
    for (int i = 1; i <= 10; i++) {  // Loop declared correctly (green check)
        print(i);  // ERROR: 'print' is not a C++ function (red highlight) – should be cout << i << endl;
    }
    
    // Additional loop attempt below (also with errors)
    for (int i = 0; i < 5; i++) { 
        cout << "Number " << i; 
    }
    
    cout << endl;
    print(the number of range); 
    
}
#include <iostream>  // Standard input/output library

using namespace std;  // Allows use of std:: without prefix

int main() {
    // Attempt to loop and print numbers from a range (e.g., 1 to 10)
    for (int i = 1; i <= 10; i++) {  // Loop declared correctly (green check)
        print(i);  // ERROR: 'print' is not a C++ function (red highlight) – should be cout << i << endl;
    }
    
    // Additional loop attempt below (also with errors)
    for (int i = 0; i < 5; i++) { 
        cout << "Number " << i; 
    }
    
    cout << endl;
    cout << "The number of range: " << 10 << endl;

}    // Additional loop: print numbers 0 to 4
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i << endl;
    }

    // Print the number of range (1 to 10)
    cout << "The number of range: " << 10 << endl;
}
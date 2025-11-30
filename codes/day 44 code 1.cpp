#include <iostream>
#include <string>
#include <cctype> 

int main() {
    std::string input;
    std::getline(std::cin, input);  
    
    int spaces = 0;
    int digits = 0;
    int special = 0;
    
    for (char ch : input) {
        if (ch == ' ') {
            spaces++;
        } else if (std::isdigit(ch)) {
            digits++;
        } else if (!std::isalpha(ch)) {
            special++;
        }
        
    }
    
    std::cout << "Spaces=" << spaces << ", Digits=" << digits << ", Special=" << special << std::endl;
    
    return 0;
}

#include <iostream>
#include <string>
#include <cctype>  // For tolower() and isalpha()

int main() {
    std::string str;
    std::cin >> str;
    
    int vowels = 0;
    int consonants = 0;
    
    for (char ch : str) {
        char lowerCh = std::tolower(ch);  // Handle case-insensitivity
        if (std::isalpha(lowerCh)) {  // Check if alphabetic
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || 
                lowerCh == 'o' || lowerCh == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    std::cout << "Vowels=" << vowels << ", Consonants=" << consonants << std::endl;
    
    return 0;
}

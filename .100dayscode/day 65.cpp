#include <iostream>
#include <string>

int main() {
    std::string s, t;
    std::cin >> s >> t;
    
    if (s.length() != t.length()) {
        std::cout << "Not Anagram" << std::endl;
        return 0;
    }
    
    int countS[26] = {0};
    int countT[26] = {0};
    
    for (char c : s) {
        countS[c - 'a']++;
    }
    
    for (char c : t) {
        countT[c - 'a']++;
    }
    
    bool isAnagram = true;
    for (int i = 0; i < 26; i++) {
        if (countS[i] != countT[i]) {
            isAnagram = false;
            break;
        }
    }
    
    if (isAnagram) {
        std::cout << "Anagram" << std::endl;
    } else {
        std::cout << "Not Anagram" << std::endl;
    }
    
    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>  // For std::replace

int main() {
    std::string input;
    
    // Read the entire line to capture spaces
    std::getline(std::cin, input);
    
    // Replace all spaces with hyphens
    std::replace(input.begin(), input.end(), ' ', '-');
    
    // Output the result
    std::cout << input << std::endl;
    
    return 0;
}

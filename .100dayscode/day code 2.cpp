#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);
    
    int max_len = 0;
    string longest_word;
    int start = 0;
    
    for(int i = 0; i <= sentence.length(); i++) {
        if(i == sentence.length() || sentence[i] == ' ') {
            string word = sentence.substr(start, i - start);
            if(word.length() > max_len) {
                max_len = word.length();
                longest_word = word;
            }
            start = i + 1;
        }
    }
    
    cout << longest_word << endl;
    return 0;
}

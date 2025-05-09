
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

class MorseCodeGenerator {
public:
    MorseCodeGenerator() {
        morseCodeMap = {
            {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
            {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."},
            {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
            {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."},
            {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
            {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
            {'Y', "-.--"}, {'Z', "--.."},
            {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"},
            {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."},
            {'8', "---.."}, {'9', "----."},
            {' ', "/"}
        };
    }

    string textToMorse(const string& text) {
        string morseCode;

        for (char c : text) {
            c = toupper(c);
            if (morseCodeMap.find(c) != morseCodeMap.end()) {
                morseCode += morseCodeMap[c] + " ";
            }
        }
        return morseCode;
    }

private:
    unordered_map<char, string> morseCodeMap;
};

int main() {
    MorseCodeGenerator generator;
    string input;

    cout << "Enter text to convert to Morse code: ";
    getline(cin, input);

    string morseCode = generator.textToMorse(input);
    cout << "Morse Code: " << morseCode << endl;

    return 0;
}

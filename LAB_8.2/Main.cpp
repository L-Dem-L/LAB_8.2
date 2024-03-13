#include <iostream>
#include <string>

using namespace std;

string removeNonAlphabetic(string str) {
    string result = "";
    for (char ch : str) {
        if (isalpha(ch)) {
            result += ch; 
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter string:" << endl;
    getline(cin, input);

    if (input.empty() || input[0] == ' ') {
        cout << "The input string starts with a space. Exiting..." << endl;
        return 1;
    }

    size_t spacePos = input.find(' ');
    string substr = input.substr(0, spacePos);
    string result = removeNonAlphabetic(substr);
    cout << "Result string:" << result << endl;

    return 0;
}

#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

int countRepeatedLetters(const string& word) {
    unordered_map<char, int> letterCount;
    int repeatCount = 0;

    for (char ch : word) {
        letterCount[ch]++;
    }

    for (auto& pair : letterCount) {
        if (pair.second > 1) {
            repeatCount += pair.second;
        }
    }

    return repeatCount;
}

int main() {
    string str;
    string word, resultWord;
    int maxRepeats = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    stringstream ss(str);

    while (ss >> word) {
      
        int repeats = countRepeatedLetters(word);

        if (repeats > maxRepeats) {
            maxRepeats = repeats;
            resultWord = word;
        }
    }

    if (!resultWord.empty()) {
        cout <<   " The highest number of repeated letters: " << resultWord << endl;
    } else {
        cout << "No word has repeated letters." << endl;
    }

    return 0;
}
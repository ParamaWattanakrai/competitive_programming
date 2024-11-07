#include <bits/stdc++.h>
using namespace std;


void createWords() {
    string input;
    getline(cin, input);
    string output = input;
    output[0] = input[4];
    output[4] = input[0];
    cout << output << endl;
}

int main() {
    string inputNumStr;
    getline(cin, inputNumStr);
    int inputNum = stoi(inputNumStr);
    for (int i = 0; i < inputNum; i++) {
        createWords();
    }
    return 0;
}
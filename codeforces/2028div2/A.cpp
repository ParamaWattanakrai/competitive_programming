#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void walk() {
    string input;
    getline(cin, input);
    vector<string> splitinput;
    istringstream iss(input);
    string s;
    while (getline(iss, s, ' ')) {
        splitinput.push_back(s);
    }
    int moveCount = stoi(splitinput[0]);
    int x = stoi(splitinput[1]);
    int y = stoi(splitinput[2]);
    int passCoord[(moveCount*2)+1][2] = {0};
    string moves;
    getline(cin, moves);
    for (int i = 0; i < moveCount*2; i++) {
        switch(moves[i]) {
            case 'N':
                passCoord[i][1]++;
                break;
            case 'E':
                passCoord[i][0]++;
                break;
            case 'S':
                passCoord[i][1]--;
                break;
            case 'W':
                passCoord[i][0]--;
                break;
        }
        passCoord[i+1][0] = passCoord[i][0];
        passCoord[i+1][1] = passCoord[i][1];
    }
    bool meet = false;
    for (int i = 0; i < moveCount; i++) {
        int deltaX = passCoord[i*2][0] - passCoord[i][0];
        int deltaY = passCoord[i*2][1] - passCoord[i][1];
        double slopeMove = deltaY / deltaX;
        double slopePoint = x / y;
        if ((slopePoint == slopeMove) && ((deltaX != 0 && deltaY != 0) && (x % deltaX == 0 && y & deltaY == 0) && (x / deltaX == y / deltaY))) {
            meet = true;
        }
    }
    if (meet) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    string t_input;
    getline(cin, t_input);
    int t = stoi(t_input);
    for (int i = 0; i < t; i++) {
        walk();
    }
    return 0;
}
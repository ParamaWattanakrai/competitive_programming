#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void walk() {
    int x = 0;
    int y = 0;

    int moveCount, a, b;
    cin >> moveCount >> a >> b;
    cin.ignore();

    string moves;
    getline(cin, moves);
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < moveCount; j++) {
        switch(moves[j]) {
            case 'N':
                y++;
                break;
            case 'E':
                x++;
                break;
            case 'S':
                y--;
                break;
            case 'W':
                x--;
                break;
        }
        if (x == a && b == y) {
            cout << "YES" << endl;
            return;
        }
        }
    }
    cout << "NO" << endl;
}

int main() {
    string t_input;
    cin >> t_input;
    int t = stoi(t_input);
    for (int i = 0; i < t; i++) {
        walk();
    }
    return 0;
}
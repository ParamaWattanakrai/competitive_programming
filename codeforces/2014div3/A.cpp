#include <bits/stdc++.h>
using namespace std;

void solve() {
    int count = 0;
    int robin = 0;
    int n, k;
    string inputArr[2];
    for (int i = 0; i < 2; i++) {
        cin >> inputArr[i];
    }
    cin.ignore();
    n = stoi(inputArr[0]);
    k = stoi(inputArr[1]);
    int a[n] = {0};
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        a[i] = stoi(input);
        if (a[i] >= k) {
            robin += a[i];
        } else if (robin > 0 && a[i] < 1) {
            robin--;
            count++;
        }
    }
    cin.ignore();
    cout << count << endl;
}

int main() {
    string t_str;
    cin >> t_str;
    cin.ignore();
    int t = stoi(t_str);
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
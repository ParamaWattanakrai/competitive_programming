#include <bits/stdc++.h>
using namespace std;

void solve() {
    string input;
    vector<string> splitinput;
    getline(cin, input);
    string s;
    istringstream iss(input);
    while (getline(iss, s, ' ')) {
        splitinput.push_back(s);
    }
    unsigned long long n = stoull(splitinput[0]);
    unsigned long long b = stoull(splitinput[1]);
    unsigned long long c = stoull(splitinput[2]);

    unsigned long long arr[n] = {0};
    for (unsigned long long i = 0; i < n && b * i + c < n; i++) {
        arr[i] = b * i + c;
    }
    cout << "[";
    for (unsigned long long i = 0; i < n; i++) {
        if (i > 0) cout << ", ";
        cout << arr[i];
    }
    cout << "]";
}

int main() {
    string t_str;
    getline(cin, t_str);
    unsigned long long t = stoull(t_str);
    for (unsigned long long i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
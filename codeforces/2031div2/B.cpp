#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n = 0;
    cin >> n;
    cin.ignore();
    int p[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    cin.ignore();
    bool operated = false;
    do {
        operated = false;
        for (int i = 0; i < n-1; i++) {
            if (p[i] - p[i+1] == 1) {
                int mem = p[i];
                p[i] = p[i+1];
                p[i+1] = mem;
                operated = true;
            }
        }
    } while ((operated == true));
    bool ans = true;
    for (int i = 0; i < n-1; i++) {
        if (p[i] > p[i+1]) {
            ans = false;
        }
    }
    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main()
{
    int t = 0;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
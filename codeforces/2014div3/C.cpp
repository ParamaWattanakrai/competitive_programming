#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n_str;
    cin >> n_str;
    cin.ignore();
    long long n = stoll(n_str);

    long long a[n] = {0};
    long long sumA = 0;
    for (long long i = 0; i < n; i++) {
        string input;
        cin >> input;
        a[i] = stoll(input);
        
        sumA += a[i];
    }
    cin.ignore();

    if (n < 3) {
        cout << -1 << endl;
        return;
    }

    // bool swap = true;
    // while (swap) {
    //     swap = false;
    //     for (long long i = 0; i < n-1; i++) {
    //         if (a[i] > a[i+1]) {
    //             long long mem = a[i];
    //             a[i] = a[i+1];
    //             a[i+1] = mem;
    //             swap = true;
    //         }
    //     }
    // }
    sort(a, a + n);

    long long medIdx = n / 2;
    long long medA = a[medIdx];

    long long x = (2 * medA * n) - sumA;
    if (x < 0) {
        x = 0;
    } else {
        x++;
    }

    // for (long long i = 0; i < n; i++) {
    //     cout << ", " << a[i];
    // }
    // cout << endl;

    // cout << "new avg: " << (sumA + x) / n << endl;
    // cout << "n: " << n << "sum: " << sumA << endl;
    // cout << "medA: " << medA << ", avg : " << sumA / n << endl;
    // cout << "ans: " << x << endl;
    cout << x << endl;
}

int main() {
    string t_str;
    cin >> t_str;
    cin.ignore();
    long long t = stoll(t_str);
    for (long long i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
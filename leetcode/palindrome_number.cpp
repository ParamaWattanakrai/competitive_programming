#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x / 10 != 0 && x % 10 == 0)) {
            return false;
        }
        if (x / 10 == 0) {
            return true;
        }

        int y = 0;
        
        while (x > y) {
            y *= 10;
            y += x % 10;
            x /= 10;
        }
        
        cout << to_string(x) + ", " + to_string(y);
        if (x == y || (y / 10 != 0 && y / 10 == x)) {
            return true;
        }
        return false;
    }
};

int main() {
    Solution a;
    a.isPalindrome(121);
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

string arr_to_str(int arr[], int length); // Function prototype

int main() {
    int unsorted_arr[] = {42, 17, 8, 23, 4, 16, 15, 9, 34, 2};
    int length = sizeof(unsorted_arr) / sizeof(unsorted_arr[0]);
    string unsorted_str = arr_to_str(unsorted_arr, length);
    cout << unsorted_str;
    return 0;
}

string arr_to_str(int arr[], int length) {
    string str = "[";
    for (int i = 0; i < length; i++) {
        if (i > 0) {
            str += ", ";
        }
        str += to_string(arr[i]);
    }
    str += "]";
    return str;
}
